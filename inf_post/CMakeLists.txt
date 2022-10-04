cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 14)

project(inf_post)

include_directories(include)

add_executable(inf_post
  src/right_string.cpp
  src/balanced.cpp
  src/op_priority.cpp
  src/postfix.cpp
  src/infix.cpp
  src/is_infix.cpp
  src/is_operator.cpp
  src/no_spaces.cpp
  src/main.cpp
  src/operand_operator.cpp
  src/is_operand.cpp
  src/is_valid.cpp
)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}")

