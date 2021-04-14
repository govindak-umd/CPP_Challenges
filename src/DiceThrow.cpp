#include"../include/DiceThrow.h"

/**
 * Main Func to find the sum of the dices thrown
 * @param sum
 * @param faces
 * @param dices_num
 * @return
 */
int DiceThrow::findSum(int sum, int faces, int dices_num) {

    //This means that if the desired sum is
    //reached with 'dices_num' of dices, then
    //return 1

    if ((dices_num == 0) && (sum == 0))
        return 1;

    // Indicates that the given requirements is impossible
    if (sum < 0 || faces * dices_num < sum || dices_num > sum)
        return 0;

    // For every loop
    int res = 0;

    // Dynamic Programming
    for(int i = 1; i <= faces ; i++){
        res += findSum(sum - i, faces, dices_num-1);
    }

    // Returning result
    return res;
}