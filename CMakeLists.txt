cmake_minimum_required(VERSION 3.21)
project(masha C)

set(CMAKE_C_STANDARD 99)

add_executable(masha main.c linear_approximation.c linear_approximation.h)
