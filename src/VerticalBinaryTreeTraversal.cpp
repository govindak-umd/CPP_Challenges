#include<../include/VerticalBinaryTreeTraversal.h>

void VerticalBinaryTreeTraversal::doVerticalTraversal(){
    // Root Node prep

    BinaryTreeNode* root_node = new BinaryTreeNode();
    root_node->cost = 1;
    root_node->data = 1;

    BinaryTreeNode* node_2 = new BinaryTreeNode('l',2,root_node);
    BinaryTreeNode* node_3 = new BinaryTreeNode('r',3,root_node);
    BinaryTreeNode* node_4 = new BinaryTreeNode('l',4,node_3);
    BinaryTreeNode* node_5 = new BinaryTreeNode('r',5,node_3);
    BinaryTreeNode* node_6 = new BinaryTreeNode('l',6,node_4);
    BinaryTreeNode* node_7 = new BinaryTreeNode('l',7,node_5);
    BinaryTreeNode* node_8 = new BinaryTreeNode('r',8,node_5);


    std::cout << "Root Node Cost : " << root_node->cost << std::endl;
    std::cout << "Node 2 Cost : " << node_2->cost << std::endl;
    std::cout << "Node 3 Cost : " << node_3->cost << std::endl;
    std::cout << "Node 4 Cost : " << node_4->cost << std::endl;
    std::cout << "Node 5 Cost : " << node_5->cost << std::endl;
    std::cout << "Node 6 Cost : " << node_6->cost << std::endl;
    std::cout << "Node 7 Cost : " << node_7->cost << std::endl;
    std::cout << "Node 8 Cost : " << node_8->cost << std::endl;

    delete root_node;
    delete node_2;
    delete node_3;
    delete node_4;
    delete node_5;
    delete node_6;
    delete node_7;
    delete node_8;
}