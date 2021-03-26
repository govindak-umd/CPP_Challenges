cmake_minimum_required(VERSION 3.17)
project(CPP_Challenges)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(CPP_Challenges
        include/q_2.h
        include/q_1.h
        src/main.cpp)
