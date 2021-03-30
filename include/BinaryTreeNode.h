#pragma once
#include<iostream>

class BinaryTreeNode{
public:
    int data;
    int cost = 0;
    BinaryTreeNode* right = nullptr;
    BinaryTreeNode* left = nullptr;
    BinaryTreeNode();
    BinaryTreeNode(char, int, BinaryTreeNode*);
};