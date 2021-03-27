#include<iostream>
#include<algorithm>

int doBinarySearch(int sorted_arr[], int num, size_t len_array){
    int mid_idx;

    int low_idx, high_idx;

    low_idx = 0;
    high_idx = len_array-1;
    while (true){

        mid_idx = (low_idx+high_idx)/2;

        // If the binary search finds the number

        // return that index
        if (sorted_arr[mid_idx] == num){
            return mid_idx;
        }

        // bring down the high index limit
        else if (sorted_arr[mid_idx] > num){
            high_idx = mid_idx - 1;
        }

        // bring up the low index limit
        else {
            low_idx = mid_idx + 1;
        }

    }
}

bool checkIfKSorted(int arr[], int k, size_t len_array){

    // Initializing an array to copy to
    int arr_copy[len_array];

    // Inserting the elements into the copied array
    for(int i=0; i < len_array; i++){
        arr_copy[i] = arr[i];
    }

    // Sorting the copied array to check
    int *arr_ptr = arr_copy;
    std::sort(arr_ptr, arr_ptr+len_array);

    // Do binary search and get the index of every element in the array
    int check_array;

    for(int i =0; i< len_array; i++) {
        check_array = doBinarySearch(arr_copy, arr[i], len_array);

        // Even if one element doesnt not comply
        // with being lesser than k units away
        // return False, else return True

        if (abs(check_array - i) > k) {
            std::cout << "This is not a K-sorted array, with k = " << k << std::endl;
            return false;
        }
    }
    std::cout << "This is a K-sorted array, with k = " << k << std::endl;
    return true;
}


