cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 14)

project(word_occupancy)

include_directories(include)

add_executable(word_occupancy
  src/woc_main.cpp
  src/print.cpp
  src/map_create.cpp
)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}")

