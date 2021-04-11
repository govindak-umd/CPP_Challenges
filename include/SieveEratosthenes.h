#pragma once
#include <iostream>
#include <vector>
#include<cmath>
class SieveEratosthenes{
public:
    int num = 100;

    std::vector<int> findPrimes();
    void printVec(std::vector<int>);
};
