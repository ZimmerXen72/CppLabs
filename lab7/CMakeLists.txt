cmake_minimum_required(VERSION 3.23)
project(lab7)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab7 main.cpp RingBuffer.h RingBuffer.inl App.h App.cpp Iterator.h Iterator.inl)
