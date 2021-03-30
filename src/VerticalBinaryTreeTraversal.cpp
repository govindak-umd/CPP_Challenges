#include<../include/VerticalBinaryTreeTraversal.h>

void VerticalBinaryTreeTraversal::doVerticalTraversal(){
    // Root Node prep
    BinaryTreeNode* root_node = new BinaryTreeNode;
    root_node->cost = 1;
    root_node->data = 1;

    // Other nodes prep
    BinaryTreeNode* node_2 = new BinaryTreeNode;
    node_2->data = 2;
    root_node->left = node_2;

    BinaryTreeNode* node_3 = new BinaryTreeNode;
    node_3->data = 3;
    root_node->right = node_3;

    BinaryTreeNode* node_4 = new BinaryTreeNode;
    node_4->data = 4;
    node_3->left = node_4;

    BinaryTreeNode* node_5 = new BinaryTreeNode;
    node_5->data = 5;
    node_3->right = node_5;

    BinaryTreeNode* node_6 = new BinaryTreeNode;
    node_6->data = 6;
    node_4->left = node_6;

    BinaryTreeNode* node_7 = new BinaryTreeNode;
    node_7->data = 7;
    node_5->left = node_7;

    BinaryTreeNode* node_8 = new BinaryTreeNode;
    node_8->data = 8;
    node_5->right = node_8;
    // Tree prep done





}