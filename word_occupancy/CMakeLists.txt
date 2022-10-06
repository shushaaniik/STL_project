cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 14)

project(word_occupancy)

include_directories(include)

add_executable(word_occupancy
  src/main.cpp
  src/print.cpp
  src/make_word_table.cpp
)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}")

