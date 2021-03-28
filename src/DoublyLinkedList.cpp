#include"../include/DoublyLinkedList.h"

void DoublyLinkedList::getHead(){
    Node* head_temp = tail;
    while(head_temp!= nullptr){
        if (head_temp->next == nullptr)
            std::cout << "Head of the DLL is : " << head_temp->data << std::endl;
        head_temp = head_temp->next;
    }
}

void DoublyLinkedList::getTail() {
    Node* prev_temp = tail;
    while(prev_temp!= nullptr){
        if (prev_temp->prev == nullptr)
            std::cout << "Tail of the DLL is : " << prev_temp->data << std::endl;
        prev_temp = prev_temp->prev;
    }
}

void DoublyLinkedList::addElemFront(int num){
    Node* head_temp = head;
    std::cout << "Adding " << num << " to the head of DLL ... "<< std::endl;
    while(head_temp!= nullptr){
        if (head_temp->next == nullptr) {

            Node *new_node = new Node;
            new_node->data = num;
            new_node->prev = head_temp;
            new_node->next = nullptr;
            head_temp->next = new_node;

            head = new_node;
            break;
        }
        head_temp = head_temp->next;
    }
}

void DoublyLinkedList::addElemEnd(int num){
    Node* head_temp = head;
    std::cout << "CURRENT HEAD : " << head_temp->data << std::endl;
    std::cout << "Adding " << num << " to the tail of DLL ... "<< std::endl;
}

void DoublyLinkedList::addElemInPos(int num, int pos){

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
    Node*head_temp = tail;
    std::cout << "CURRENT TAIL : " << head_temp->data << std::endl;

    while(head_temp!= nullptr) {

        std::cout << head_temp->data << std::endl;

        if(head_temp->next!= nullptr)
            std::cout<<"\tNext to this is ... " << head_temp->next->data << std::endl;
        else {
            head = head_temp;
            std::cout << " ---  THIS IS THE HEAD --- " << std::endl;
            std::cout << "\tNext to this is a null pointer ... " << std::endl;
        }

        if (head_temp->prev != nullptr)
            std::cout << "\tPrevious to this is ... " << head_temp->prev->data << std::endl;
        else {
            std::cout << "\tPrevious to this is a null pointer ... " << std::endl;
            std::cout << " ---  THIS IS THE TAIL --- " << std::endl;
        }

        head_temp=head_temp->next;

    }
}
void DoublyLinkedList::createDoublyLinkedList(std::vector<int> my_vec){
    std::cout << "Creating A Doubly Linked List ..." << std::endl;

    for(int v: my_vec){
        Node *new_node =  new Node();
        new_node->data = v;
        new_node->next = tail;
        new_node->prev = nullptr;
        if (tail!= nullptr){
            tail->prev = new_node;
        }
        tail = new_node;
    }

    std::cout << "Doubly Linked List ready! " << std::endl;
}