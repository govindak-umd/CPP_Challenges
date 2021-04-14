#include"../include/LongestCommonSubsequenceBU.h"

/**
 * Func to print the longest common subsequence
 * @param len_a
 * @param len_b
 */
void LongestCommonSubsequenceBU::viewLookupTable(int len_a, int len_b){
    for(int i=0; i<=len_a; i++){
        for(int j=0; j<=len_b; j++){
            std::cout << lcs_lookup_table[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

/**
 * Filling it to backtrack and find the
 * exact longest common subsequence
 * @param string_a
 * @param string_b
 * @param len_a
 * @param len_b
 */
void LongestCommonSubsequenceBU::fillMaxLookupTable(std::string string_a,
                                                    std::string string_b,
                                                    int len_a,
                                                    int len_b){

    for(int i=0; i<=len_a; i++){
        for(int j=0; j<=len_b; j++){
            lcs_lookup_table[i][j] = 0;
        }
    }

    for(int i=1; i<=len_a; i++){
        for(int j=1; j<=len_b; j++){
            if(string_a[i-1] == string_b[j-1]){
                lcs_lookup_table[i][j] = 1 + lcs_lookup_table[i-1][j-1] ;
            }
            else{
                lcs_lookup_table[i][j] = std::max(lcs_lookup_table[i][j-1],
                                                  lcs_lookup_table[i-1][j]);
            }
        }
    }

    std::cout << "Length of the lookup table : " << lcs_lookup_table[len_a][len_b] << std::endl;
}

/**
 * Prints the LCS
 * @param string_a
 * @param string_b
 * @param len_a
 * @param len_b
 * @return
 */
std::string LongestCommonSubsequenceBU::printLCS(std::string string_a,
                                                 std::string string_b,
                                                 int len_a,
                                                 int len_b){
    if (len_a == 0 || len_b == 0){
        return "";
    }

    if (string_a[len_a-1] == string_b[len_b - 1]){
        return printLCS(string_a, string_b, len_a-1, len_b-1) + string_a[len_a-1] ;
    }

    if (lcs_lookup_table[len_a-1][len_b] > lcs_lookup_table[len_a][len_b-1]){
        return printLCS(string_a, string_b, len_a-1, len_b);
    }
    else{
        return printLCS(string_a, string_b, len_a, len_b - 1);
    }


}