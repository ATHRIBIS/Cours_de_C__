cmake_minimum_required(VERSION 3.17)
project(POO)

set(CMAKE_CXX_STANDARD 14)

add_executable(POO main.cpp class/Personnage.cpp class/Personnage.h class/Arme.cpp class/Arme.h)
