cmake_minimum_required(VERSION 3.8)
project(primis-sandbox VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_FLAGS "-std=c++20")
include(CTest)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include_directories(
    ${CMAKE_SOURCE_DIR}/../Primis/vendor/include/
    ${CMAKE_SOURCE_DIR}/../Primis/src/)
link_directories(${CMAKE_SOURCE_DIR}/../Primis/build/lib/)
add_executable(primis-sandbox main.cpp)
target_link_libraries(primis-sandbox libprimis.a)

message("Sandbox is built!")
