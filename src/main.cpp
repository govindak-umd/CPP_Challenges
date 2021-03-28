#include"../include/q_1.h"
#include"../include/q_2.h"
#include"../include/q_3.h"
#include"../include/Node.h"
#include"../include/LinkedList.h"
#include"../include/DoublyLinkedList.h"

int main(){

    // Question 1

//    int arr[] {8, 7, 2, 5, 3, 1};
//    int combo = 10;
//    size_t len_num_array;
//    len_num_array = sizeof(arr)/ sizeof(arr[0]);
//    findSumCombos(len_num_array, arr, combo);

    // Question 2

//    K-SORTED
//    int arr[] {3,2,1,5,6,4};
//    Not K-SORTED
//    int arr[] = {13, 8, 10, 7, 15, 14, 12};
//    size_t len_array = sizeof(arr) / sizeof(arr[0]);
//    int k = 2;
//    checkIfKSorted(arr, k, len_array);

    // Question 3

//    findKthSmallestElement();

    // Question 4

//    std::vector<int> my_vec {19,21,32,24,45,69};
//    LinkedList my_ll;
//    my_ll.createLinkedList(my_vec);
//    my_ll.getHead();
//    my_ll.printLinkedList();
//    my_ll.addElem(5,3);
//    my_ll.printLinkedList();
//    my_ll.deleteElem(3);
//    my_ll.printLinkedList();

    // Question 5

    std::vector<int> my_vec {19,21,32,24,45,69};
    DoublyLinkedList my_dll;
    my_dll.createDoublyLinkedList(my_vec);
    my_dll.printDoublyLinkedList();
    my_dll.getLength();

    return 0;
}