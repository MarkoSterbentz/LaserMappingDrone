
set (environment "LDFLAGS;-L/home/marko/research/VeloView-master/build/install/lib;CPPFLAGS;-fPIC;CXXFLAGS;-fPIC;CFLAGS;-fPIC;CMAKE_PREFIX_PATH;/home/marko/research/VeloView-master/build/install")
set (command /home/marko/research/VeloView-master/build/python/src/python/configure;--prefix=/home/marko/research/VeloView-master/build/install;--enable-unicode;--enable-shared)

set (key)
foreach (arg IN ITEMS ${environment})
  if (NOT key)
    set (key "${arg}")
  else ()
    # message ("setting ${key}=${arg}")
    if (key STREQUAL LD_LIBRARY_PATH)
      # append LD_LIBRARY_PATH to existing LD_LIBRARY_PATH.
      set (ENV{${key}} "${arg}:$ENV{${key}}")
      message ("LD_LIBRARY_PATH = $ENV{LD_LIBRARY_PATH}")
    else ()
      set (ENV{${key}} ${arg})
    endif()
    set (key)
  endif()
endforeach()

execute_process(COMMAND ${command}
  RESULT_VARIABLE rv)

if (NOT "${rv}" STREQUAL "0")
  message(FATAL_ERROR "Failed!!!")
endif()
