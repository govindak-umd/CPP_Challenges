#pragma once
#include "Node.h"
#include<iostream>
#include<vector>

class LinkedList{

private:
    Node * head;
    int len;
public:
    void getHead();
    void addElem(int, int);
    void deleteElem(int);
    int getLength();
    void printLinkedList();
    void createLinkedList(std::vector<int>);

};