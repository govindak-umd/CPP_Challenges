#pragma once
#include<iostream>
#include<vector>
#define MAX_DIM 100

class MatrixChainMultiplication{
public:
    int dp_matrix[MAX_DIM][MAX_DIM];
    std::vector<int> matrices= {10,20,30, 40, 30};
    int dim = matrices.size();
    void fillDp();
    int findNumWays();
};
