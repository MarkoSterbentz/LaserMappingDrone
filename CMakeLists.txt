# cMakeLists.txt

# No lesser version of cMake may be used.
cmake_minimum_required(VERSION 3.3)

# Declare the project in question
project(LaserMappingDrone)

# Make sure the project compiles with the c++11 and thread safety flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -g -O3")

#set(LIBS ${LIBS})

set(DUA_INCLUDE_DIR ./)
include_directories(${DUA_INCLUDE_DIR})

# Find all the source files
set(SOURCE_FILES main.cpp QuadTree.cpp QuadTree.h)

# Make an executable called LaserMappingDrone out of all the above source files
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link to external libraries that were found above
#target_link_libraries(${PROJECT_NAME} ${LIBS})
