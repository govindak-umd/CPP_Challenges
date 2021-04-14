#include"../include/DiceThrow.h"

int DiceThrow::findSum(int sum, int faces, int dices_num) {
    if ((dices_num == 0) && (sum == 0))
        return 1;

    if (sum < 0 || faces * dices_num < sum || dices_num > sum)
        return 0;

    int res = 0;

    for(int i = 1; i <= faces ; i++){
        res += findSum(sum - i, faces, dices_num-1);
    }

    return res;
}