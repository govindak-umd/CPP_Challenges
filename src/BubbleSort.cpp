#include"../include/BubbleSort.h"

/**
 * This func does the Bubble sorting of
 * the array in C++.
 */
void BubbleSort::BubbleSortArray(){

    while(true){
        bool swap = false;
        for(int j =0; j < len_array-1; j++){
            if (my_arr[j]>my_arr[j+1]){
                std::cout << "Swapping " << my_arr[j] << " with  " << my_arr[j+1] << std::endl;

                int * my_arr_first = new int;
                my_arr_first = &my_arr[j];
                int * my_arr_second = new int;
                my_arr_second = &my_arr[j+1];

                int temp = *my_arr_first;
                *my_arr_first = *my_arr_second;
                *my_arr_second = temp;
                swap = true;
            }
        }
        printArray();
        if (!swap){
            std::cout << "No swap detected in this pass! " << std::endl;
            break;
        }
    }
    std::cout << "Bubble Sort done! " << std::endl;
}

/*
 * Prints the array
 */
void BubbleSort::printArray(){
    std::cout << "Printing ... ";
    size_t len_arr = sizeof (my_arr)/sizeof (my_arr[0]);
    for(int i = 0; i < len_arr; i++){
        std::cout << my_arr[i] <<" ";
    }
    std::cout <<  std::endl;
}