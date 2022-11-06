cmake_minimum_required(VERSION 3.23)
project(MatricesCalculator C)

set(CMAKE_C_STANDARD 23)

add_executable(MatricesCalculator library/source/matrix.c project/main.c)
