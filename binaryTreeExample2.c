#include <stdio.h>
#include <stdlib.h>

typedef struct treenode
{   
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;


treenode *createNode(int value)
{
    treenode* result = malloc(sizeof(treenode));
    if(result != NULL)
    {
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }

    return result;
}


int main()
{
    treenode *n1 = createNode(10);
    treenode *n2 = createNode(11);
    treenode *n3 = createNode(12);
    treenode *n4 = createNode(13);
    treenode *n5 = createNode(14);
    return 0;
}