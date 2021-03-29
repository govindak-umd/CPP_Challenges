#include"../include/LinkedList.h"

void LinkedList::createLinkedList(std::vector<int> my_vec) {
    std::cout << "Creating Linked List ..." << std::endl;

    for(int v: my_vec){
        Node* new_node = new Node();
        new_node->data = v;
        new_node->next = head;
        head = new_node;
    }
}

void LinkedList::getHead(){
    std::cout << "The head is:" << std::endl;
    std::cout << head->data<< std::endl;
}

void LinkedList::addElem(int val, int pos){
    std::cout << "Adding element to the Linked List ..." << std::endl;
    Node* head_temp = head;
    int count = 0;
    while(head_temp!=nullptr){
        if (count == pos){
            Node* add_node = new Node;
            add_node->data = head_temp->data;
            add_node->next = head_temp->next;
            head_temp->next =add_node;
            head_temp->data = val;
        }
        head_temp = head_temp->next;
        count+=1;
    }
}

void LinkedList::deleteElem(int pos){
    std::cout << "Deleting element from the Linked List ..." << std::endl;
    Node* head_temp = head;
    int count = 0;
    while(head_temp!=nullptr){
        if (count == pos-1){
            head_temp->next->data = head_temp->next->next->data;
            head_temp->next = head_temp->next->next;
        }
        head_temp = head_temp->next;
        count+=1;
    }

}

int LinkedList::getLength(){
    Node* head_temp = head;
    int count = 0;
    while(head_temp!=NULL){
        count+=1;
        head_temp = head_temp->next;
    }
    len = count;
    return len;
}

void LinkedList::printLinkedList(){
    std::cout << "Printing Linked List ... " << std::endl;
    Node* head_temp = head;
    while(head_temp!=nullptr){
        std::cout << head_temp->data << std::endl;
        head_temp = head_temp->next;
    }
    std::cout << "Linked List ready! " << std::endl;

}

