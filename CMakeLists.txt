cmake_minimum_required(VERSION 3.6)
project(cmake_testapp)
set(CMAKE_CXX_STANDARD 20)

include_directories(features/a/inc)
include_directories(features/b/inc)

add_subdirectory(features)
add_subdirectory(main)