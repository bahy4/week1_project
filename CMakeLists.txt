cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER g++)
project(trigonometria)
message(INFO:\ ${trigonometria_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${trigonometria_SOURCE_DIR}/bin)
set(MAIN_SOURCES src/ans_handler.cpp src/my_math.cpp main.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

add_executable(trigonometria ${MAIN_SOURCES})

#target_include_directories(trigonometria PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
