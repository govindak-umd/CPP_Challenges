#include<iostream>
#include<algorithm>
#include<tuple>
#include<vector>

void findSumCombos(size_t, int[], int);

int main(){
    int arr[] {8, 7, 2, 5, 3, 1};
    int combo = 10;

    size_t len_num_array;
    len_num_array = sizeof(arr)/ sizeof(arr[0]);

    findSumCombos(len_num_array, arr, combo);

    return 0;
}

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


    if (vec_tuple.size() != 0)
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
