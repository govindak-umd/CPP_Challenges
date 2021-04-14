#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#define MAX_DIMENSION 20
/**
 * This is the Top Down approach to
 * find the Longest Common Subsequence.
 * Unlike the substring, this does not require the letters
 * to be in any specific order.
 */
class LongestCommonSubsequenceTD{
public:
    int lcs_lookup_table[MAX_DIMENSION][MAX_DIMENSION];
    void viewLookupTable(int, int);
    void fillMaxLookupTable(std::string, std::string, int, int);
    int findLCS(std::string, std::string, int, int);
};
