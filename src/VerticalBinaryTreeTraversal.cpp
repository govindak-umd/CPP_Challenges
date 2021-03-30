#include<../include/VerticalBinaryTreeTraversal.h>

void VerticalBinaryTreeTraversal::prepareTree(){
    /**
     * Prepares the Tree for Vertical Traversal
     * The tree that has been prepared here looks like below:
            1       <-root_node
          /   \
         /     \
        2       3           <- node to the right of the parent node
              /   \
             /     \
left_node-> 4      5
          /      /   \
         /      /      \
        6      7        8

     */
    // Root Node prep

    BinaryTreeNode* root_node = new BinaryTreeNode('p',1,root_node);
    tree_root = root_node;
    tree_map.insert(std::pair<int,int>(root_node->data, root_node->cost));
    BinaryTreeNode* node_2 = new BinaryTreeNode('l',2,root_node);
    tree_map.insert(std::pair<int,int>(node_2->data, node_2->cost));

    BinaryTreeNode* node_3 = new BinaryTreeNode('r',3,root_node);
    tree_map.insert(std::pair<int,int>(node_3->data, node_3->cost));

    BinaryTreeNode* node_4 = new BinaryTreeNode('l',4,node_3);
    tree_map.insert(std::pair<int,int>(node_4->data, node_4->cost));

    BinaryTreeNode* node_5 = new BinaryTreeNode('r',5,node_3);
    tree_map.insert(std::pair<int,int>(node_5->data, node_5->cost));

    BinaryTreeNode* node_6 = new BinaryTreeNode('l',6,node_4);
    tree_map.insert(std::pair<int,int>(node_6->data, node_6->cost));

    BinaryTreeNode* node_7 = new BinaryTreeNode('l',7,node_5);
    tree_map.insert(std::pair<int,int>(node_7->data, node_7->cost));

    BinaryTreeNode* node_8 = new BinaryTreeNode('r',8,node_5);
    tree_map.insert(std::pair<int,int>(node_8->data, node_8->cost));

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

void VerticalBinaryTreeTraversal::sortTree(){
    std::map <int, int> ::iterator my_itr;
    std::cout << " The size of the dictionary is : " << tree_map.size() << std::endl;


}


