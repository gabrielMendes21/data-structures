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
    new->prev = NULL;

    return new;
}

// Find an element in the list
node* find(node* head, int value)
{
    // Create a traversal pointer pointing to the list's head
    node* traversal = head;

    // Check if node's number is equal to `value`
    if (traversal->number == value) 
        return traversal;
    else if (traversal->next == NULL)
        return NULL;

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
    new->prev = NULL;
    head->prev = new;
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

void delete(node* head, node* target)
{
    if (target != NULL) 
    {
        // Change the list head if target is the current head
        if (target->prev == NULL) 
        {
            target->next->prev = NULL;
            head = target->next;
        }
        // Just change the next element of the target prev element
        else if (target->next == NULL)
            target->prev->next = NULL;
        // Deletion if target is neither head nor the last element
        else 
        {
            target->prev->next = target->next;
            target->next->prev = target->prev;
        }

        free(target);
    }
}

// Print all elements of the list
void print_elements(node* head)
{
    printf("===============\n");
    for (node* n = head; n != NULL; n = n->next)
    {
        printf("%i\n", n->number);
    }
    printf("===============\n");
}
