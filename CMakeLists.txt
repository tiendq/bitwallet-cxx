cmake_minimum_required(VERSION 3.18)
project(bitwallet_cxx DESCRIPTION "Simple password manager built with Qt and SQLite" VERSION 0.0.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wdeprecated")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(PROJECT_SOURCE "src/main.cpp")

add_subdirectory(libs/SQLiteCpp)
include_directories(libs/SQLiteCpp/include)
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE})

# target_include_directories(${PROJECT_NAME} PRIVATE "libs/SQLiteCpp/include")

if(UNIX AND NOT APPLE)
  # Removed linking to pthread, more detail:
  # https://github.com/tstack/lnav/issues/153
  # https://stackoverflow.com/questions/33697072/why-is-pthread-necessary-for-usage-of-stdthread-in-gcc-and-clang
  target_link_libraries(${PROJECT_NAME} SQLiteCpp sqlite3 dl)
else()
  target_link_libraries(${PROJECT_NAME} SQLiteCpp sqlite3)
endif()
