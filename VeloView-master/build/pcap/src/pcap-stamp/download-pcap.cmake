if(EXISTS "/home/marko/research/VeloView-master/build/downloads/libpcap-1.4.0.tar.gz")
  file("MD5" "/home/marko/research/VeloView-master/build/downloads/libpcap-1.4.0.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "x56e88a5aabdd1e04414985ac24f7e76c")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://www.tcpdump.org/release/libpcap-1.4.0.tar.gz'
     dst='/home/marko/research/VeloView-master/build/downloads/libpcap-1.4.0.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://www.tcpdump.org/release/libpcap-1.4.0.tar.gz"
  "/home/marko/research/VeloView-master/build/downloads/libpcap-1.4.0.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://www.tcpdump.org/release/libpcap-1.4.0.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
