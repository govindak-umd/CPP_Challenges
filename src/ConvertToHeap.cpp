#include "../include/ConvertToHeap.h"


void ConvertToHeap::Heapify(int i){

    int largest = i;

}

void ConvertToHeap::arr2Heap(){

    for(int i = len_array; i > 0; i--){
        Heapify(i);
    }
}

