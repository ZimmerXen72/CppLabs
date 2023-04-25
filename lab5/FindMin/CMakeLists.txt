cmake_minimum_required(VERSION 3.23)
project(FindMin)

set(CMAKE_CXX_STANDARD 20)

add_executable(FindMin main.cpp Exceptions.cpp Exceptions.h App.cpp App.h Utils.h Utils.inl)
