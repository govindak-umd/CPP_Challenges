#include"../include/CoinDenominations.h"

int CoinDenominations::determineGreatest(int price) {
    for (int i = vec_size-1; i>=0; i--){
        if ((price/denominations[i]) != 0){
            continue;
        }
        else if ((price/denominations[i]) == 0){
            return i+1;
        }
    }
    return 0;
}

void CoinDenominations::getDenominations(int cost, int start, int sum){

}

void CoinDenominations::prepareArray(){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 20; k++) {
                for (int l = 0; l < 100; l++) {
                    my_arr[i][j][k][l] = -1;
                }
            }
        }
    }
}

void CoinDenominations::prepareSumArray(){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 20; k++) {
                for (int l = 0; l < 100; l++) {
                    sum_arr[i][j][k][l] = 0;
                }
            }
        }
    }
}

void CoinDenominations::printArray(){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 20; k++) {
                for (int l = 0; l < 100; l++) {
                    if(my_arr[i][j][k][l] > 0)
                        std::cout << i <<" " << j << " " <<  k <<" " <<" > " << l << my_arr[i][j][k][l] << std::endl;
                }
            }
        }
    }
}

void CoinDenominations::printSumArray(){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 20; k++) {
                for (int l = 0; l < 100; l++) {
                    if(sum_arr[i][j][k][l] > 0)
                        std::cout << i <<" " << j << " " <<  k <<" " << l <<" > " << sum_arr[i][j][k][l] << std::endl;
                }
            }
        }
    }
}