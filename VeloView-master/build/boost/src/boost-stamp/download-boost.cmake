if(EXISTS "/home/marko/research/VeloView-master/build/downloads/boost_1_50_0.tar.gz")
  file("MD5" "/home/marko/research/VeloView-master/build/downloads/boost_1_50_0.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "xdbc07ab0254df3dda6300fd737b3f264")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://downloads.sourceforge.net/project/boost/boost/1.50.0/boost_1_50_0.tar.gz'
     dst='/home/marko/research/VeloView-master/build/downloads/boost_1_50_0.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://downloads.sourceforge.net/project/boost/boost/1.50.0/boost_1_50_0.tar.gz"
  "/home/marko/research/VeloView-master/build/downloads/boost_1_50_0.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://downloads.sourceforge.net/project/boost/boost/1.50.0/boost_1_50_0.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
