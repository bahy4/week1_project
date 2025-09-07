cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(trigonometria)
message(INFO:\ ${trigonometria_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${trigonometria_SOURCE_DIR}/bin)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(trigonometria main.cpp src/my_math.cpp src/ans_handler.cpp)