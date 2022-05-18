cmake_minimum_required(VERSION 3.21)
project(simulare_colocviu)

set(CMAKE_CXX_STANDARD 20)

add_executable(simulare_colocviu main.cpp statie.cpp statie.h pct_informare.cpp pct_informare.h generator.cpp generator.h)
