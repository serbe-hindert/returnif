cmake_minimum_required(VERSION 3.27)
project(returnif C)

set(CMAKE_C_STANDARD 23)

# Since this is a header-only library, you don't need to add any source files.
# Instead, you can use INTERFACE to indicate that this is a header-only library.
add_library(returnif INTERFACE)

# Set the include directories for users of your library
target_include_directories(returnif INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
