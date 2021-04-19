cmake_minimum_required(VERSION 3.17)
project(CPP_Challenges)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(CPP_Challenges
        src/DummyTest.cpp
        src/DiceThrow.cpp
        src/LongestCommonSubsequenceTD.cpp
        src/LongestCommonSubsequenceBU.cpp
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

target_link_libraries(CPP_Challenges gtest gtest_main)

add_executable(CPP_Testing

        src/DummyTest.cpp

        test/main.cpp
        test/test_dummy.cpp)

target_link_libraries(CPP_Testing gtest gtest_main)
