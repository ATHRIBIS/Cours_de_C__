cmake_minimum_required(VERSION 3.17)
project(Experimentation)

set(CMAKE_CXX_STANDARD 14)

add_executable(Experimentation main.cpp class/Personnage.cpp class/Personnage.h class/Arme.cpp class/Arme.h class/Item.cpp class/Item.h)
