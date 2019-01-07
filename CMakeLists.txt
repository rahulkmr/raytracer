cmake_minimum_required(VERSION 2.8)
project(raytracer)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(hello ${PROJECT_SOURCE_DIR}/src/hello.cpp)