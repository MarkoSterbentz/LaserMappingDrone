# cmcurlConfig.cmake - the config file for curl.
set(protobuf_INCLUDE_DIRS "/home/marko/research/VeloView-master/build/paraview/src/paraview/ThirdParty/protobuf/vtkprotobuf/src;/home/marko/research/VeloView-master/build/paraview/src/paraview-build/ThirdParty/protobuf/vtkprotobuf/src")
set(protobuf_EXPORTS_FILE "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/ThirdParty/protobuf/vtkprotobuf/PROTOBUF_EXPORTS.cmake")

include("${protobuf_EXPORTS_FILE}")

#-------------------------------------------------------------------------------
# Create a macro that runs the Protocol buffer compiler
# PROTOC (outfile proto_file )
MACRO (PROTOC outfile proto_file )
  GET_FILENAME_COMPONENT(basename ${proto_file} NAME_WE)
  GET_FILENAME_COMPONENT(absolute ${proto_file} ABSOLUTE)
  GET_FILENAME_COMPONENT(path ${absolute} PATH)
  SET(${outfile} ${CMAKE_CURRENT_BINARY_DIR}/${basename}.pb.cc)
  ADD_CUSTOM_COMMAND(
    OUTPUT ${${outfile}}
    COMMAND ${PROTOBUF_EXECUTABLE} --cpp_out=${CMAKE_CURRENT_BINARY_DIR} --proto_path ${path} ${absolute}
    DEPENDS ${proto_file}
  )
ENDMACRO (PROTOC)
