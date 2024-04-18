#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

// Create a new linked list-based queue
queue* create(int value)
{
    queue* new = malloc(sizeof(queue));
    if (new == NULL)
    {
        printf("Error while creating a new queue");
        exit(1);
    }

    new->value = value;
    new->next = NULL;
    new->prev = NULL;

    return new;
}

// Add a new element to the end of the queue
void enqueue(queue** tail, int value)
{
    // Create a new element
    queue *new = malloc(sizeof(queue));
    if (new == NULL)
    {
        printf("ERROR while adding a new element\n");
        exit(2);
    }

    // Populate `new`
    new->value = value;
    new->next = NULL;
    new->prev = *tail;

    // Add `new` to the queue tail
    (*tail)->next = new;
    *tail = new;
}

// Remove the oldest element of the queue
void dequeue(queue** head)
{
    queue* traversal = (*head)->next;
    traversal->prev = NULL;
    free(head);
    *head = traversal;
}