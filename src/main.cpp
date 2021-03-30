#include"../include/q_1.h"
#include"../include/q_2.h"
#include"../include/q_3.h"
#include"../include/Node.h"
#include"../include/LinkedList.h"
#include"../include/DoublyLinkedList.h"
#include"../include/q_6.h"
#include"../include/TaskSchedule.h"
#include<../include/VerticalBinaryTreeTraversal.h>

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
    // Here ... > head to tail
//    std::vector<int> my_vec {19,21,32,24,45,69};
//    DoublyLinkedList my_dll;
//
//    my_dll.createDoublyLinkedList(my_vec);
//    my_dll.printDoublyLinkedList();
//
//    my_dll.getLength();
//    my_dll.getHead();
//    my_dll.getTail();
//
//    my_dll.addElemFront(5);
//    my_dll.printDoublyLinkedList();
//    my_dll.getHead();
//    my_dll.getTail();
//
//    my_dll.addElemEnd(56);
//    my_dll.printDoublyLinkedList();
//    my_dll.getHead();
//    my_dll.getTail();
//
//    my_dll.addElemInPos(85,5);
//    my_dll.printDoublyLinkedList();
//    my_dll.getHead();
//    my_dll.getTail();
//
//    my_dll.deleteElem(5);
//    my_dll.printDoublyLinkedList();
//    my_dll.getHead();
//    my_dll.getTail();

    // Question 6

//    std::string key = "ABCD";
//    std::string perm_key = "BDAC";
//    findLexicographicString(key, perm_key);

    // Question 7
    
//    Job my_job_1{1,9,15};
//    Job my_job_2 = {2,2,2};
//    Job my_job_3 = {3,5,18};
//    Job my_job_4 = {4,7,1};
//    Job my_job_5 = {5,4,25};
//    Job my_job_6 = {6,2,20};
//    Job my_job_7 = {7,5,8};
//    Job my_job_8 = {8,7,10};
//    Job my_job_9 = {9,4,12};
//    Job my_job_10 = {10,3,5};
//
//    std::vector <Job> all_jobs {my_job_1,
//                                my_job_2,
//                                my_job_3,
//                                my_job_4,
//                                my_job_5,
//                                my_job_6,
//                                my_job_7,
//                                my_job_8,
//                                my_job_9,
//                                my_job_10};
//
//    TaskSchedule taskSchedule;
//    taskSchedule.scheduleJobsMaximiseProfit(all_jobs);
    
    // Question 7
    VerticalBinaryTreeTraversal traversal;

    traversal.prepareTree();
    traversal.sortAndPrintTree();
    return 0;
}