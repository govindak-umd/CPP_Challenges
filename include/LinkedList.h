#pragma once
#include "Node.h"
#include<iostream>
#include<vector>

class LinkedList{

private:
    Node head;
    int len;
public:
    void declareHead(Node);
    void addElem();
    void deleteElem();
    void getLength();
    void printLinkedList();
    void createLinkedList(std::vector<int>);
};