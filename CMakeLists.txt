# cMakeLists.txt

# No lesser version of cMake may be used.
cmake_minimum_required(VERSION 3.3)

# Declare the project in question
project(LaserMappingDrone)

# Make sure the project compiles with the c++11 and thread safety flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -g -O0")

# Tell cMake where to look for the modules that search for SDL2 (the others come with cMake)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmakeModules/")

## IF BUILDING FOR VISUAL STUDIO ON WINDOWS: Tell cMake where to look for third party libs (add to this for your own builds)
#set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "C:/libs/SDL2-2.0.4" "C:/libs/glew-1.13.0")
#set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "C:/libs/SDL2-2.0.4/lib/x86" "C:/libs/glew-1.13.0/lib/Release/win32")

# Find SDL 2.0
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
set(LIBS ${LIBS} ${SDL2_LIBRARY})

#find_package(SDL2_net REQUIRED)
#include_directories(${SDL2_NET_INCLUDE_DIR})
#set(LIBS ${LIBS} ${SDL2_NET_LIBRARY})

# Find GLEW
find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
set(LIBS ${LIBS} ${GLEW_LIBRARIES})

# Find OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})
set(LIBS ${LIBS} ${OPENGL_LIBRARIES})

set(DUA_INCLUDE_DIR QuadTree AssetManagement Grid Utilities Utilities/ReaderWriterQueue PacketReceiver PacketAnalyzer)
include_directories(${DUA_INCLUDE_DIR})

# Find all the source files
set(SOURCE_FILES main.cpp QuadTree/QuadTree.h QuadTree/QuadTreeDrawer.h QuadTree/QuadTreeDrawer.cpp
        AssetManagement/LoadShaders.h AssetManagement/LoadShaders.cpp Grid/Grid.h Grid/GridDrawer.h
        Utilities/Delegate.h PacketAnalyzer/PacketAnalyzer.cpp PacketAnalyzer/PacketAnalyzer.h
        PacketReceiver/PacketReceiver.cpp PacketReceiver/PacketReceiver.h Utilities/Graphics.cpp Utilities/Graphics.h Grid/Kernel.cpp Grid/Kernel.h)
        #PacketReceiver/UdpConnection.cpp PacketReceiver/UdpConnection.h)

# Make an executable called LaserMappingDrone out of all the above source files
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link to external libraries that were found above
target_link_libraries(${PROJECT_NAME} ${LIBS})

# Copy assets into build tree
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/Shaders
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Shaders)
