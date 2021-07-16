cmake_minimum_required(VERSION 3.10)
project(ProjectName VERSION 0.0)

set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

set(LIBRARY_OUTPUT_PATH build/)
set(BINARY_OUTPUT_PATH build/)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Add GTest
include(External_GTest.cmake)

# Source
include_directories(include)
add_subdirectory(src)

# Test
include_directories(test)
add_subdirectory(test)

# Executable
add_library(SRC_OBJECTS_LIB OBJECT ${SOURCES})
add_executable(ProjectName $<TARGET_OBJECTS:SRC_OBJECTS_LIB> Main.cpp)

# Unit tests
set(TEST_BINARY_FILES $<TARGET_OBJECTS:SRC_OBJECTS_LIB> ${TEST_FILES} ${MAIN_TEST})
add_executable(ProjectName_UT ${TEST_BINARY_FILES})
target_link_libraries(ProjectName_UT ${GTEST_MAIN_LIBRARY} ${GTEST_LIBRARY} ${GMOCK_MAIN_LIBRARY} ${GMOCK_LIBRARY})
