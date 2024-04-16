#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void)
{
    node* node = create(50);

    // Find number 50
    find(node, 50) != NULL ? printf("Found!\n") : printf("Not found\n");

    // Insert 18
    node = insert(node, 18);

    delete(node, find(node, 50));
    delete(node, find(node, 98));

    // Print 18
    print_elements(node);

    // Delete the entire list
    destroy(node);
}