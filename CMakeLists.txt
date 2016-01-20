# cMakeLists.txt

# No lesser version of cMake may be used.
cmake_minimum_required(VERSION 3.3)

# Declare the project in question
project(LaserMappingDrone)

# Make sure the project compiles with the c++11 and thread safety flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -g -O0")

# Tell cMake where to look for the modules that search for SDL2 (the others come with cMake)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmakeModules/")

# Find SDL 2.0
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
set(LIBS ${LIBS} ${SDL2_LIBRARY})

# Find GLEW
find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
set(LIBS ${LIBS} ${GLEW_LIBRARIES})

# Find OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})
set(LIBS ${LIBS} ${OPENGL_LIBRARIES})

set(DUA_INCLUDE_DIR QuadTree AssetManagement)
include_directories(${DUA_INCLUDE_DIR})

# Find all the source files
set(SOURCE_FILES main.cpp QuadTree/QuadTree.h QuadTree/SimpleSquare.h QuadTree/SimpleSquare.cpp
        AssetManagement/LoadShaders.h AssetManagement/LoadShaders.cpp)

# Make an executable called LaserMappingDrone out of all the above source files
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link to external libraries that were found above
target_link_libraries(${PROJECT_NAME} ${LIBS})

# Copy assets into build tree
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/Shaders
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Shaders)
