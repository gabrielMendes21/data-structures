#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void)
{
    // Create returns a pointer to the head of the list
    node* head_node = create(50); // Renomeado para evitar conflito de nome

    // Find number 50
    find(head_node, 50) != NULL ? printf("Found!\n") : printf("Not found\n");

    // Insert 18
    // &node is a pointer to the pointer called `node`
    insert(&head_node, 18);

    delete(&head_node, find(head_node, 18));
    delete(&head_node, find(head_node, 98));

    // Print all elements of the list
    print_elements(head_node);

    // Delete the entire list
    destroy(head_node);
}

// int main(void)
// {
//     // Create returns a pointer to the head of the list
//     node* node_head = create(50);

//     // Find number 50
//     find(node_head, 50) != NULL ? printf("Found!\n") : printf("Not found\n");

//     // Insert 18
//     // &node is a pointer to the pointer called `node`
//     insert(&node_head, 18);

//     delete(&node_head, find(node_head, 18));
//     delete(&node_head, find(node_head, 98));

//     // Print all elements of the list
//     print_elements(node_head);

//     // Delete the entire list
//     destroy(node_head);
// }