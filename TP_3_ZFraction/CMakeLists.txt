project(TP_3)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(TP_3 main.cpp ZFraction.cpp ZFraction.h)