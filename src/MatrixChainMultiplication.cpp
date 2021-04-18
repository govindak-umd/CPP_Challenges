#include"../include/MatrixChainMultiplication.h"


void MatrixChainMultiplication::fillDp(){
    for(int i =0; i<MAX_DIM; i++ ){
        for(j = 0; j < MAX_DIM; j++) {
            dp_matrix[i][j] = 0;
        }
    }
}