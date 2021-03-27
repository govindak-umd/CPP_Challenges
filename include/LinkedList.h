#pragma once
#include<iostream>

class LinkedList{

private:
    Node head;
    int len;
public:
    void addElem();
    void deleteElem();
    void getLength();
    void printLinkedList();
};