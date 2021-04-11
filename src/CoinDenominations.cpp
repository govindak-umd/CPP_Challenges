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

void CoinDenominations::getDenominations(int cost, int start){
}

void CoinDenominations::prepareArray(){
    for (int i = 0; i < 94; i++) {
        for (int j = 0; j < 4; j++) {
            my_arr[i][j] = -10;
        }
    }
}

void CoinDenominations::printArray(){
    for (int i = 0; i < 94; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (my_arr[i][j] >=0){
                std::cout << "Element at my_arr[" << i
                          << "][" << j << "]: ";
                std::cout << my_arr[i][j] << std::endl;
            }
        }
    }
}