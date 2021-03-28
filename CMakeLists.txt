cmake_minimum_required(VERSION 3.17)
project(CPP_Challenges)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(CPP_Challenges
        src/LinkedList.cpp
        src/main.cpp)
