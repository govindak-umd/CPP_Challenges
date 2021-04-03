#pragma once
#include<iostream>

class ConvertToHeap{
public:
    int arr[7] = {1,5,6,8,9,7,3};
    size_t len_array = sizeof(arr)/sizeof(arr[0]);
    void arr2Heap();
    void Heapify(int);
    void printArray();
};