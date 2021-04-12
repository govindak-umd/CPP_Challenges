#include"../include/CoinDenominationsTD.h"

int CoinDenominationsTD::countMin(std::vector<int> denominations, int m
                                 , int n) {

    if (n == 0){
        return 1;
    }

    if (n < 0){
        return 0;
    }

    if (m <= 0 && n > 0){
        return 0;
    }

    return countMin(denominations, m-1, n) + countMin(denominations, m , n-denominations[m-1]);

}