# include_directories(inc)
# include_directories(${CMAKE_SOURCE_DIR}/features/b/inc)

add_library(a SHARED inc/a.hpp a.cpp)

# find_library(B b ${CMAKE_SOURCE_DIR}/build/features/b)
target_link_libraries(a LINK_PUBLIC b)