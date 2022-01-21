cmake_minimum_required(VERSION 3.17)
project(_hashmap)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)

add_library(_hashmap SHARED src/hashmap/Hashmap.cpp)