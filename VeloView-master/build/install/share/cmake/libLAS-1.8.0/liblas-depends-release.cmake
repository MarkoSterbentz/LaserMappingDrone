#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "las" for configuration "Release"
set_property(TARGET las APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(las PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "/home/marko/research/VeloView-master/build/install/lib/libboost_chrono.so;/home/marko/research/VeloView-master/build/install/lib/libboost_program_options.so;/home/marko/research/VeloView-master/build/install/lib/libboost_thread.so;/home/marko/research/VeloView-master/build/install/lib/libboost_system.so;/usr/lib/x86_64-linux-gnu/libpthread.so"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblas.so.2.1.0"
  IMPORTED_SONAME_RELEASE "liblas.so.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS las )
list(APPEND _IMPORT_CHECK_FILES_FOR_las "${_IMPORT_PREFIX}/lib/liblas.so.2.1.0" )

# Import target "las_c" for configuration "Release"
set_property(TARGET las_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(las_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "las;/home/marko/research/VeloView-master/build/install/lib/libboost_chrono.so;/home/marko/research/VeloView-master/build/install/lib/libboost_program_options.so;/home/marko/research/VeloView-master/build/install/lib/libboost_thread.so;/home/marko/research/VeloView-master/build/install/lib/libboost_system.so;/usr/lib/x86_64-linux-gnu/libpthread.so"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblas_c.so.2.1.0"
  IMPORTED_SONAME_RELEASE "liblas_c.so.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS las_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_las_c "${_IMPORT_PREFIX}/lib/liblas_c.so.2.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
