#pragma once
#include"BinaryTreeNode.h"

/**
 * Given a binary tree, perform vertical traversal on it. In a vertical traversal, nodes of binary tree are printed
 * in vertical order. Assume that the left and right child makes a 45-degree angle with the parent node.
 */
class VerticalBinaryTreeTraversal{

public:
    std::map<int,int> tree_map;
    BinaryTreeNode* tree_root;
    void prepareTree();
    void sortAndPrintTree();
};
