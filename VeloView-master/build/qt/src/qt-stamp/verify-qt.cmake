set(file "/home/marko/research/VeloView-master/build/downloads/qt-everywhere-opensource-src-4.8.2.tar.gz")
message(STATUS "verifying file...
     file='${file}'")
set(expect_value "3c1146ddf56247e16782f96910a8423b")
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
