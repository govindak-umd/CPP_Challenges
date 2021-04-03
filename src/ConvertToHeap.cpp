#include "../include/ConvertToHeap.h"


void ConvertToHeap::Heapify(int i){
    printArray();
    int largest = i;
    int left_node_idx = 2*i + 1;
    int right_node_idx = 2*i + 2;

    if(left_node_idx < len_array && arr[left_node_idx] > arr[largest]){
        largest = left_node_idx;
    }

    if(right_node_idx < len_array && arr[right_node_idx] > arr[largest]){
        largest = right_node_idx;
    }

    if (largest != i){
        std::swap(arr[i], arr[largest]);

        // Now keep check and heapify-ing for that branch or
        // sub-tree

        Heapify(largest);
    }
}

void ConvertToHeap::arr2Heap(){

    for(int i = len_array; i >= 0; i--){
        Heapify(i);
        printArray();
    }
}

/*
 * Prints the array
 */
void ConvertToHeap::printArray(){
    std::cout << "Printing ... ";
    for(int i = 0; i < len_array; i++){
        std::cout << arr[i] <<" ";
    }
    std::cout <<  std::endl;
}
