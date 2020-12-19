# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.


cmake_minimum_required(VERSION 3.17)
project(Surcharge_operateurs)

set(CMAKE_CXX_STANDARD 14)

add_executable(Surcharge_operateurs main.cpp class/duree.cpp class/duree.h)
