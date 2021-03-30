#pragma once
#include<iostream>
#include<map>
#include<iterator>

class BinaryTreeNode{
public:
    int data;
    int cost = 0;
    BinaryTreeNode* right = nullptr;
    BinaryTreeNode* left = nullptr;
    BinaryTreeNode();
    BinaryTreeNode(char, int, BinaryTreeNode*);
};