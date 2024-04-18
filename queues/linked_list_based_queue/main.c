#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    queue* queue_head = create(987);
    queue* queue_tail = queue_head;

    enqueue(&queue_tail, 20);
    enqueue(&queue_tail, 100);
    enqueue(&queue_tail, 18);
    dequeue(&queue_head);
    enqueue(&queue_tail, 7);
    enqueue(&queue_tail, 70);

    // Print all queue elements
    for (queue* p = queue_head; p != NULL; p = p->next)
    {
        printf("%i\n", p->value);
    }
}