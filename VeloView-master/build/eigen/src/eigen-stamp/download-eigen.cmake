if(EXISTS "/home/marko/research/VeloView-master/build/downloads/eigen-3.1.2.tar.gz")
  file("MD5" "/home/marko/research/VeloView-master/build/downloads/eigen-3.1.2.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "xbb639388192cb80f1ee797f5dbdbe74f")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://vtk.org/files/support/eigen-3.1.2.tar.gz'
     dst='/home/marko/research/VeloView-master/build/downloads/eigen-3.1.2.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://vtk.org/files/support/eigen-3.1.2.tar.gz"
  "/home/marko/research/VeloView-master/build/downloads/eigen-3.1.2.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://vtk.org/files/support/eigen-3.1.2.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
