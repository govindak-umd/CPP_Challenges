#pragma once
#include<iostream>
#include<algorithm>
#include<tuple>
#include<vector>

/**
 * Function generates all possible combinations of
 * the numbers in the input array that generates the required
 * sum
 *
 * @param len_num_array
 * @param num_array
 * @param n
 */

void findSumCombos(size_t len_num_array, int num_array[], int n){

    int low, high, i, j;

    std::sort(num_array,num_array+len_num_array);

    std::tuple<int, int> num_combo;

    std::vector<std::tuple<int, int>> vec_tuple;

    for(i =0; i< len_num_array-1; i++){
        low = num_array[i];
        for(j =i+1; j< len_num_array; j++){
            high = num_array[j];
            if (low+high == n) {
                num_combo = std::make_tuple(low, high);
                vec_tuple.push_back(num_combo);
            }
        }
    }


    if (!vec_tuple.empty())
    {
        std::cout << "Printing the valid combinations ... " << std::endl;
        for (auto vec_elem: vec_tuple) {
            std::cout << "(" << std::get<0>(vec_elem) << "," << std::get<1>(vec_elem) << ")" << std::endl;
        }
    }
    else{
        std::cout << "Sorry, no combinations were found. Try again" << std::endl;
    }

}
