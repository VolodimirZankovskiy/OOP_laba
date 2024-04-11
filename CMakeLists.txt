cmake_minimum_required(VERSION 3.26)
project(OOP_laba)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_laba main.cpp
        Doctor.cpp
        Doctor.h
        Hospital.cpp
        Hospital.h
        Patient.cpp
        Patient.h)
