cmake_minimum_required(VERSION 3.18)
project(bitwallet_cxx)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(PROJECT_SOURCE src/main.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE})
