#pragma once
#include<iostream>

class Node{
public:
    int data;
    Node* next;
};

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