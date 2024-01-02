cmake_minimum_required(VERSION 3.27)
project(returnif C)

set(CMAKE_C_STANDARD 23)

add_library(returnif INTERFACE)

target_include_directories(returnif INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
