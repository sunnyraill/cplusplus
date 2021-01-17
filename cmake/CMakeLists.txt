cmake_minimum_required(VERSION 3.15)

# set the project name
project(Basics)

# flags

# files

# include
include_directories( ./include ./src )

# add the executable
add_executable(Basics "../src/main.cpp" "../src/temp.cpp")


