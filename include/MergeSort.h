#pragma once

#include<iostream>

class MergeSort{
private:
public:
    int my_arr[7]{38,27,43,3,9,82,10};
    size_t len_array = sizeof (my_arr)/sizeof my_arr[0];
    void MergeSortArray();
    void printArray();
};
