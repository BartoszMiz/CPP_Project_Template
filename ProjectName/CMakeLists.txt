cmake_minimum_required(VERSION 3.10)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED true)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin/)

project(ProjectName VERSION 0.0.1)

add_executable(ProjectName src/main.cpp)

add_subdirectory(src)
target_include_directories(ProjectName PRIVATE "include/")
target_link_libraries(ProjectName PRIVATE src)
