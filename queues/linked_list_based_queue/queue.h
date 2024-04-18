#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue
{
    int value;
    struct queue *next;
    struct queue *prev;
} queue; 

queue* create(int value);
void enqueue(queue** tail, int value);
void dequeue(queue** head);

#endif