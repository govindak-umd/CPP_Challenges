#include<iostream>


void findSumCombo(size_t, int[], int);

int main(){
    int arr[5] {1,2,3,4,5};
    size_t len_num_array;
    len_num_array = sizeof(arr)/ sizeof(arr[0]);
    findSumCombo(len_num_array, arr, 12);
    return 0;
}

void findSumCombo(size_t len_num_array, int num_array[], int n){
    int i;
    for(i = 0; i < len_num_array; i++){
        std::cout << num_array[i] << std::endl;
    }
}
