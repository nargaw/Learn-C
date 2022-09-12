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

void printTabs(int numTabs)
{
    for(int i=0; i < numTabs; i++)
    {
        printf("\t");
    }
}

void printTree(treenode* root)
{
    printTree_rec(root, 0);
}

void printTree_rec(treenode *root, int level)
{
    if(root == NULL)
    {
        printTabs(level);
        printf("----<Empty>------\n");
        return;
    }

    //preorder traversal
    printTabs(level);
    printf("value = %d\n", root->value);
    printTabs(level);
    printf("left\n");

    printTree_rec(root->left, level + 1);
    printTabs(level);
    printf("right\n");

    printTree_rec(root->right, level + 1);
    printTabs(level);
    printf("done\n");
}


int main()
{
    treenode *n1 = createNode(10);
    treenode *n2 = createNode(11);
    treenode *n3 = createNode(12);
    treenode *n4 = createNode(13);
    treenode *n5 = createNode(14);

    n1->left = n2;
    n1->right = n3;
    n3->left = n4;
    n3->right = n5;

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);

    return 0;
}