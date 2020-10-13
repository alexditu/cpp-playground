cmake_minimum_required (VERSION 3.18)

project (cpp-playground)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_POSITION_INDEPENDENT_CODE ON)
set (CMAKE_CXX_VISIBILITY_PRESET hidden)
set (CMAKE_VISIBILITY_INLINES_HIDDEN YES)
set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set (DEPENDENCIES_DIR "third-party-deps")

add_compile_options (-Wall -Wextra -g -ggdb -pthread -fno-common -fstack-protector -fno-omit-frame-pointer)

include_directories ("${DEPENDENCIES_DIR}/include")
link_directories ("${DEPENDENCIES_DIR}/lib")

link_libraries (spdlog)

add_subdirectory (src)