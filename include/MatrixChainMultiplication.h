#pragma once
#include<iostream>
#define MAX_DIM 100
class MatrixChainMultiplication{
public:
    int dp_matrix[MAX_DIM][MAX_DIM];
    int dimensions[5] = {40,20,30,10,30};

    void fillDp();
    void findNumWays();
};
