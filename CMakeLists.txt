#修改的地方用changed标记

cmake_minimum_required(VERSION 3.5.1)

project(IMLogin C CXX)  #changed

# include(./common.cmake)

# Proto file
get_filename_component(im_proto "./IM.Login.proto" ABSOLUTE) #changed
get_filename_component(im_proto_path "${im_proto}" PATH) #changed

set(CMAKE_CXX_STANDARD 17)
# Generated sources
set(im_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/IM.Login.pb.cc") #changed
set(im_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/IM.Login.pb.h") #changed
set(im_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/IM.Login.grpc.pb.cc") #changed
set(im_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/IM.Login.grpc.pb.h") #changed
add_custom_command( #changed
      OUTPUT "${im_proto_srcs}" "${im_proto_hdrs}" "${im_grpc_srcs}" "${im_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${im_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${im_proto}"
      DEPENDS "${im_proto}")

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# im_grpc_proto
#changed
add_library(im_grpc_proto
  ${im_grpc_srcs}
  ${im_grpc_hdrs}
  ${im_proto_srcs}
  ${im_proto_hdrs})
target_link_libraries(im_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# Targets greeter_[async_](client|server)
foreach(_target
  client server async_server #生成的可执行程序名
  )
  add_executable(${_target} "${_target}.cc")
  target_link_libraries(${_target}
    im_grpc_proto
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})
endforeach()

