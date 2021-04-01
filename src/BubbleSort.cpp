#include"../include/BubbleSort.h"

void BubbleSort::BubbleSortArray(){
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