set(file "/home/marko/research/VeloView-master/build/downloads/Python-2.7.2.tgz")
message(STATUS "verifying file...
     file='${file}'")
set(expect_value "0ddfe265f1b3d0a8c2459f5bf66894c7")
file(MD5 "${file}" actual_value)
if("${actual_value}" STREQUAL "${expect_value}")
  message(STATUS "verifying file... done")
else()
  message(FATAL_ERROR "error: MD5 hash of
  ${file}
does not match expected value
  expected: ${expect_value}
    actual: ${actual_value}
")
endif()
