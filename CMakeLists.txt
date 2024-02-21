cmake_minimum_required(VERSION 3.28.0)

project(DS VERSION 0.1.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_subdirectory(ds)

add_executable(ds_test main.c)
target_link_libraries(ds_test ds)