#include"../include/CoinDenominationsBU.h"


int CoinDenominationsBU::createTable(std::vector<int>denominations, int m , int n){
    int my_table[n+1];

    for (int i =0; i <= n; i++){
        my_table[i] = 99999;
    }

    my_table[0] = 0;

    for (int i =1; i <= n; i++){
        for(int j =0; j<m; j++){

            if(denominations[j] <= i){
                my_table[i] = std::min(my_table[i-denominations[j]] + 1,my_table[i]);
            }
        }
    }
    std::cout << std::endl;

    return my_table[n];
}