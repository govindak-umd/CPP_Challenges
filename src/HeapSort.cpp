#include "../include/HeapSort.h"


void HeapSort::Heapify(int i, int heap_type){
    printArray();
    int largest = i;
    int left_node_idx = 2*i + 1;
    int right_node_idx = 2*i + 2;

    // To get Max Heap

    if (heap_type == 1) {
        if (left_node_idx < len_array && arr[left_node_idx] > arr[largest]) {
            largest = left_node_idx;
        }
        if(right_node_idx < len_array && arr[right_node_idx] > arr[largest]){
            largest = right_node_idx;
        }
    }

    if (heap_type == 0) {
        if (left_node_idx < len_array && arr[left_node_idx] < arr[largest]) {
            largest = left_node_idx;
        }
        if (right_node_idx < len_array && arr[right_node_idx] < arr[largest]) {
            largest = right_node_idx;
        }
    }


    if (largest != i){
        std::swap(arr[i], arr[largest]);

        // Now keep check and heapify-ing for that branch or
        // sub-tree

        Heapify(largest, heap_type);
    }
}

void HeapSort::arr2Heap(){

    for(int i = len_array; i >= 0; i--){
        Heapify(i, heap_type);
        printArray();
    }
    if (heap_type == 1) {
        std::cout << "Max Heap done!!" <<  std::endl;
    }

    if (heap_type == 0) {
        std::cout << "Min Heap done!!" <<  std::endl;
    }
}

/*
 * Prints the array
 */
void HeapSort::printArray(){
    std::cout << "Printing ... ";
    for(int i = 0; i < len_array; i++){
        std::cout << arr[i] <<" ";
    }
    std::cout <<  std::endl;
}
