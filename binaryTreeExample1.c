#include <stdio.h>
#include <stdlib.h>

struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};
//BstNode: binary search tree node
//each BstNode has a left and right nodes to store a pointer to left or right child respectively


struct BstNode* GetNewNode(int data)
{
    struct BstNode *newNode = NULL;
    newNode = malloc(sizeof(struct BstNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//data to be inserted as a node


int main()
{
    struct BstNode* rootPtr; //store address of root node
    rootPtr = NULL;
    //rootPtr is not assigned yet

    Insert(&rootPtr, 15);
    Insert(&rootPtr, 25);
    Insert(&rootPtr, 35);


    return 0;
}