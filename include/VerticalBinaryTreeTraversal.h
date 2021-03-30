#pragma once
#include"BinaryTreeNode.h"

class VerticalBinaryTreeTraversal{

public:
    std::map<int,int> tree_map;
    BinaryTreeNode* tree_root;
    void prepareTree();
    void sortTree();
};
