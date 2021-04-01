#pragma once

#include<iostream>

class BubbleSort{
private:
public:
    int my_arr[5]{5,1,4,2,8};
    size_t len_array = sizeof (my_arr)/sizeof my_arr[0];
    void BubbleSortArray();
    void printArray();
};
