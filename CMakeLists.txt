cmake_minimum_required(VERSION 3.10)

# set the project name
project(kolkoikrzyzyk)

include_directories(.)

# add the executable
add_executable(kolkoikrzyzyk main.cpp ai.cpp table.cpp)
