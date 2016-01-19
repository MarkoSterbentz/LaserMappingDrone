if("fix-windows-stdint" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

set(run 0)

if("/home/marko/research/VeloView-master/build/liblas/src/liblas-stamp/liblas-gitinfo.txt" IS_NEWER_THAN "/home/marko/research/VeloView-master/build/liblas/src/liblas-stamp/liblas-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/marko/research/VeloView-master/build/liblas/src/liblas-stamp/liblas-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/marko/research/VeloView-master/build/liblas/src/liblas"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/marko/research/VeloView-master/build/liblas/src/liblas'")
endif()

# try the clone 3 times incase there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" clone "git://github.com/mwoehlke-kitware/libLAS.git" "liblas"
    WORKING_DIRECTORY "/home/marko/research/VeloView-master/build/liblas/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'git://github.com/mwoehlke-kitware/libLAS.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git" checkout fix-windows-stdint
  WORKING_DIRECTORY "/home/marko/research/VeloView-master/build/liblas/src/liblas"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'fix-windows-stdint'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule init
  WORKING_DIRECTORY "/home/marko/research/VeloView-master/build/liblas/src/liblas"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to init submodules in: '/home/marko/research/VeloView-master/build/liblas/src/liblas'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule update --recursive 
  WORKING_DIRECTORY "/home/marko/research/VeloView-master/build/liblas/src/liblas"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/marko/research/VeloView-master/build/liblas/src/liblas'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/marko/research/VeloView-master/build/liblas/src/liblas-stamp/liblas-gitinfo.txt"
    "/home/marko/research/VeloView-master/build/liblas/src/liblas-stamp/liblas-gitclone-lastrun.txt"
  WORKING_DIRECTORY "/home/marko/research/VeloView-master/build/liblas/src/liblas"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/marko/research/VeloView-master/build/liblas/src/liblas-stamp/liblas-gitclone-lastrun.txt'")
endif()

