message(STATUS "downloading...
     src='http://paraview.org/files/v3.98/dependencies/Python-2.7.2.tgz'
     dst='/home/marko/research/VeloView-master/build/downloads/Python-2.7.2.tgz'
     timeout='none'")




file(DOWNLOAD
  "http://paraview.org/files/v3.98/dependencies/Python-2.7.2.tgz"
  "/home/marko/research/VeloView-master/build/downloads/Python-2.7.2.tgz"
  SHOW_PROGRESS
  EXPECTED_HASH;MD5=0ddfe265f1b3d0a8c2459f5bf66894c7
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://paraview.org/files/v3.98/dependencies/Python-2.7.2.tgz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
