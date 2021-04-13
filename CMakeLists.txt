cmake_minimum_required(VERSION 3.17)
project(CPP_Challenges)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(CPP_Challenges
        src/LongestCommonSubsequence.cpp
        src/CoinDenominationsBU.cpp
        src/CoinDenominationsTD.cpp
        src/SieveEratosthenes.cpp
        src/MultiThreading.cpp
        src/ReverseString.cpp
        src/HeapSort.cpp
        src/BubbleSort.cpp
        src/MergeSort.cpp
        src/InsertionSort.cpp
        src/BinaryTreeNode.cpp
        src/VerticalBinaryTreeTraversal.cpp
        src/TaskSchedule.cpp
        src/DoublyLinkedList.cpp
        src/LinkedList.cpp
        src/main.cpp)
