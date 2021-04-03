#pragma once
#include<iostream>

class ConvertToHeap{
public:

    // heap_type = 1 for max heap
    // heap_type = 0 for min heap
    int heap_type = 1;
    int arr[7] = {1,5,6,8,9,7,3};
    size_t len_array = sizeof(arr)/sizeof(arr[0]);
    void arr2Heap();
    void Heapify(int, int);
    void printArray();
};