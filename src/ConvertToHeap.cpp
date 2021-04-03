#include "../include/ConvertToHeap.h"


void ConvertToHeap::Heapify(int i){

    int largest = i;

}

void ConvertToHeap::arr2Heap(){
    int start_idx = (len_array/2) - 1;

    for(int i = start_idx; i > 0; i--){
        Heapify(i);
    }
}

