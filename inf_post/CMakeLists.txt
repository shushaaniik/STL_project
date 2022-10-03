cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 14)

project(inf_post)

include_directories(include)

add_executable(inf_post
  src/no_num.cpp
  src/balanced.cpp
  src/op_priority.cpp
  src/postfix.cpp
  src/infix.cpp
  src/is_infix.cpp
  src/is_operator.cpp
  src/main.cpp
)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}")

