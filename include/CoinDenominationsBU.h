#pragma once
#include<iostream>
#include<vector>
#include <algorithm>

/**
 * This is a coin change problem, part of  dynamic programming.
 * This is a Bottom Up Approach
 */
class CoinDenominationsBU{
public:
    int createTable(std::vector<int>, int, int);
};