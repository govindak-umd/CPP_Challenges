#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include "../include/Node.h"

class DoublyLinkedList{
private:
    Node * tail = nullptr;
    Node * head = nullptr;
    int len;
public:
    void getHead();
    void getTail();
    void addElemFront(int);
    void addElemEnd(int);
    void addElemInPos(int, int);
    void deleteElem(int);
    int getLength();
    void printDoublyLinkedList();
    void createDoublyLinkedList(std::vector<int>);
};
