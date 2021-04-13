#include"../include/LongestCommonSubsequenceTD.h"

int LongestCommonSubsequenceTD::findLCS(std::string string_a,
                                       std::string string_b
                                       , int len_a, int len_b){

    if (len_a == 0 || len_b == 0){
        return 0;
    }

    if (string_a[len_a-1] == string_b[len_b - 1]){
        return 1 + findLCS(string_a, string_b, len_a-1, len_b-1);
    }

    return std::max(findLCS(string_a, string_b, len_a-1, len_b),
                    findLCS(string_a, string_b, len_a, len_b - 1));


}