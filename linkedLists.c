#include <stdio.h>
#include <stdlib.h>


/* Linked Lists
 * 
 * Dynamic Data structure that uses pointers for its implementation
 * function as an array that can grow and shrink as needed from any point in the array
 * 
 * Advantages:
 * 1. Itemas can be added or removed from the middle of the list
 * 2. There is no need to define an initial size
 * 
 * Disadvantages:
 * 1. No ranom access - impossible to reach nth item in the array without first iterating over all items that come before
 * 2. Dynamic memory allocation and pointers are required - increases risk of memory leaks and segment faults
 * 3. much larger overhead than arrays, each item in the list must also store an additional pointer
 * 
 * A linked list is a set of dynamically allocated nodes such that each node contains a value and a pointer
 * The pointer points to the next member of the list
 * 
 *          ---------------------------------                ---------------------------------
 *          |               |               |                |               |               |
 *          |    DATA       |     NEXT      |    ----->      |    DATA       |     NEXT      |
 *          |               |               |                |               |               |
 *          ---------------------------------                ---------------------------------
 * 
 *  Struct is defined in a recursive manner  
*/

typedef struct node
{
    int val;
    struct node * next;
} node_t;

int main()
{
    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    if(head == NULL)
    {
        return 1;
    }

    head -> val = 1;
    head -> next = NULL;

    return 0;
}