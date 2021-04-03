#include"../include/InsertionSort.h"


/**
 * The function does insertion sorting
 * of an array. The algorithm works by iterating forwards
 * to check for a greater number, followed by
 * iterating back at every point to see if there is a
 * lower number that is present in the array.
 */

void InsertionSort::insertionSortArray(){
    size_t len_arr = sizeof (my_arr)/sizeof (my_arr[0]);
    int temp;
    for(int i = 1; i < len_arr; i++){
        std::cout << "Checking at " << my_arr[i] << " ... " << std::endl;
        int j = i;
        while(j > 0){
            if (my_arr[j-1] > my_arr[j]){
                std::cout << "Swapping " << my_arr[j-1] << " with  " << my_arr[j] << std::endl;
                int * my_arr_first = &my_arr[j-1];
                int * my_arr_second = &my_arr[j];

                temp = *my_arr_first;
                *my_arr_first = *my_arr_second;
                *my_arr_second = temp;
                printArray();
            }
            j-=1;
        }
    }

    std::cout << "Insertion Sort Completed!" << std::endl;
}

/*
 * Prints the array
 */
void InsertionSort::printArray(){
    std::cout << "Printing ... ";
    size_t len_arr = sizeof (my_arr)/sizeof (my_arr[0]);
    for(int i = 0; i < len_arr; i++){
        std::cout << my_arr[i] <<" ";
    }
    std::cout <<  std::endl;
}