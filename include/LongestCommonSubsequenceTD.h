#pragma once
#include<iostream>
#include<string>
#include<algorithm>

/**
 * This is the Top Down approach to
 * find the Longest Common Subsequence.
 * Unlike the substring, this does not require the letters
 * to be in any specific order.
 */
class LongestCommonSubsequenceTD{
public:
    int findLCS(std::string, std::string, int, int);
};
