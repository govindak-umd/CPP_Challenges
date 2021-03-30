#include"../include/BinaryTreeNode.h"

BinaryTreeNode::BinaryTreeNode(){
    /**
     * for the root node only
     */
}
BinaryTreeNode::BinaryTreeNode(char direction, int data, BinaryTreeNode* parent_node){
    /**
     * Overloaded constructor that adjusts traversal cost,
     * data  and node based on the inputs
     */
    this->data = data;
    if(direction=='l'){
        this->cost = parent_node->cost-1;
    }
    if(direction=='r'){
        this->cost = parent_node->cost+1;
    }
    if(direction=='p'){
        this->cost = 0;
    }
}