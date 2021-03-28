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
    Node* head2 = head;
    int count = 0;
    while(head2!=nullptr){
        if (count == pos){
            Node* add_node = new Node;
            add_node->data = head2->data;
            add_node->next = head2->next;
            head2->next =add_node;
            head2->data = val;
        }
        head2 = head2->next;
        count+=1;
    }
}

void LinkedList::deleteElem(int pos){
    std::cout << "Deleting element from the Linked List ..." << std::endl;
    Node* head2 = head;
    int count = 0;
    while(head2!=nullptr){
        if (count == pos-1){
            head2->next->data = head2->next->next->data;
            head2->next = head2->next->next;
        }
        head2 = head2->next;
        count+=1;
    }

}

int LinkedList::getLength(){
    Node* head2 = head;
    int count = 0;
    while(head2!=NULL){
        count+=1;
        head2 = head2->next;
    }
    len = count;
    return len;

}
void LinkedList::printLinkedList(){
    std::cout << "Printing Linked List ... " << std::endl;
    Node* head2 = head;
    while(head2!=nullptr){
        std::cout << head2->data << std::endl;
        head2 = head2->next;
    }
}

