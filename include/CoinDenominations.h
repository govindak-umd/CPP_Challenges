#pragma once
#include<iostream>
#include<vector>
class CoinDenominations{
public:

    std::vector<int> denominations{25,10,5,1};
    size_t vec_size = denominations.size();
    int cents = 94;
    int my_arr[4][10][20][100];
    int sum_arr[4][10][20][100];
    void getDenominations(int, int, int);
    int determineGreatest(int);
    void printArray();
    void printSumArray();
    void prepareArray();
    void prepareSumArray();
};