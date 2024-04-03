#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void)
{
    node* node = create(50);

    // Find number 50
    find(node, 50) == 1 ? printf("Found!\n") : printf("Not found\n");

    // Insert 18
    node = insert(node, 18);

    // Print 18 and 50
    print_elements(node);

    // Delete the entire list
    destroy(node);
}