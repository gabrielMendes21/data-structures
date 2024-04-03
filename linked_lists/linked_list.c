#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Creates a new liked list
node* create(int value)
{
    // Allocate memory for a new node
    node *new = malloc(sizeof(node));
    if (new == NULL)
    {
        printf("ERROR while creating a new list\n");
        exit(1);
    }

    // Initialize values for the created node
    new->number = value;
    new->next = NULL;

    return new;
}

// Find an element in the list
int find(node* head, int value)
{
    // Create a traversal pointer pointing to the list's head
    node* traversal = head;

    // Check if node's number is equal to `value`
    if (traversal->number == value) 
        return 1;
    else if (traversal->next == NULL)
        return 0;

    // Recursive call
    find(traversal->next, value);
}

// Insert a new node at the beginning of the linked list
node* insert(node* head, int value)
{
    node* new = malloc(sizeof(node));
    if (new == NULL)
    {
        printf("ERRO while inserting a new node\n");
        exit(2);
    }

    // Add value to node's number
    new->number = value;

    // New is now pointing to the old head and becomes the new head
    new->next = head;
    head = new;

    return new;
}

// Delete an entire list
void destroy(node* head)
{
    if (head == NULL) 
    {
        return;
    }

    destroy(head->next);

    free(head);
}

// Print all elementos of the list
void print_elements(node* head)
{
    for (node* n = head; n != NULL; n = n->next)
    {
        printf("%i\n", n->number);
    }
}
