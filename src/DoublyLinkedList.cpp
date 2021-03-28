#include"../include/DoublyLinkedList.h"

void DoublyLinkedList::getHead(){

}

void DoublyLinkedList::getTail() {

}

void DoublyLinkedList::addElemFront(int num, int pos){

}

void DoublyLinkedList::addElemEnd(int num, int pos){

}

void DoublyLinkedList::deleteElem(int pos){

}

int DoublyLinkedList::getLength(){
    int count{0};
    Node* head_temp = head;
    while(head_temp!=nullptr){
        count+=1;
        head_temp = head_temp->next;
    }
    len =  count;
    return len;
}
void DoublyLinkedList::printDoublyLinkedList(){
    std::cout << "Printing Doubly Linked List ... " << std::endl;
    Node*head_temp = head;

    while(head_temp!= nullptr){

        std::cout << head_temp->data << std::endl;

        if(head_temp->prev!= nullptr)
            std::cout<<"\tPrevious to this is ... " << head_temp->prev->data << std::endl;
        else
            std::cout<< "\tPrevious to this is a null pointer ... " << std::endl;

        if(head_temp->next!= nullptr)
            std::cout<<"\tNext to this is ... " << head_temp->next->data << std::endl;
        else
            std::cout<< "\tNext to this is a null pointer ... " << std::endl;

        head_temp=head_temp->next;

    }
}
void DoublyLinkedList::createDoublyLinkedList(std::vector<int> my_vec){
    std::cout << "Creating A Doubly Linked List ..." << std::endl;

    for(int v: my_vec){
        Node *new_node =  new Node();
        new_node->data = v;
        new_node->next = head;
        new_node->prev = nullptr;
        if (head!= nullptr){
            head->prev = new_node;}
        head = new_node;
    }

    std::cout << "Doubly Linked List ready! " << std::endl;
}