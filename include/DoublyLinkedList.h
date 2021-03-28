#pragma once
#include<iostream>
#include<vector>
#include "../include/Node.h"

class DoublyLinkedList{
private:
    Node * head = nullptr;
    int len;
public:
    void getHead();
    void addElem(int, int);
    void deleteElem(int);
    int getLength();
    void printDoublyLinkedList();
    void createDoublyLinkedList(std::vector<int>);
};
