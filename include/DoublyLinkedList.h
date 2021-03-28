#pragma once
#include "Node.h"
#include<iostream>
#include<vector>

class DoublyLinkedList{
private:
    Node * head;
    int len;
public:
    void getHead();
    void addElem(int, int);
    void deleteElem(int);
    int getLength();
    void printDoublyLinkedList();
    void createDoublyLinkedList(std::vector<int>);
};
