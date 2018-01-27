cmake_minimum_required(VERSION 3.8)
project(PO_GDeLosRios_A03C)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Shape.cpp Shape.h Circle.cpp Circle.h Rectangle.cpp Rectangle.h Square.cpp Square.h)
add_executable(PO_GDeLosRios_A03C ${SOURCE_FILES})