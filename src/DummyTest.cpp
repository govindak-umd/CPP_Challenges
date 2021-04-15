#include"../include/DummyTest.h"

int DummyTest::findFactorial(int num){
    if (num == 1 || num == 0)
        return 1;
    else
        return num * findFactorial(num-1);
};
