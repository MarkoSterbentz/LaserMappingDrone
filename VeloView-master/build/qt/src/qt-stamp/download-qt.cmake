message(STATUS "downloading...
     src='http://download.qt-project.org/archive/qt/4.8/4.8.2/qt-everywhere-opensource-src-4.8.2.tar.gz'
     dst='/home/marko/research/VeloView-master/build/downloads/qt-everywhere-opensource-src-4.8.2.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://download.qt-project.org/archive/qt/4.8/4.8.2/qt-everywhere-opensource-src-4.8.2.tar.gz"
  "/home/marko/research/VeloView-master/build/downloads/qt-everywhere-opensource-src-4.8.2.tar.gz"
  SHOW_PROGRESS
  EXPECTED_HASH;MD5=3c1146ddf56247e16782f96910a8423b
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://download.qt-project.org/archive/qt/4.8/4.8.2/qt-everywhere-opensource-src-4.8.2.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
