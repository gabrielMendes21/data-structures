#include <stdio.h>
#define CAPACITY 4

typedef struct queue
{
  int array[CAPACITY];
  int front;
  int size; 
} queue;

void enqueue(queue* q, int value);
void dequeue(queue* q);

int main(void) 
{
    // Create a new array-based queue
    queue q;
    q.front = 0;
    q.size = 0;

    // Add some numbers
    enqueue(&q, 91);
    enqueue(&q, 78);
    enqueue(&q, 18);
    enqueue(&q, 26);

    // Remove the oldest element from the queue
    dequeue(&q);

    enqueue(&q, 5);

    dequeue(&q);

    // Show current elements of the queue
    for (int i = q.front; i < CAPACITY; i++)
    {
        printf("%i\n", q.array[i]);
    }
}

void enqueue(queue* q, int value)
{
    // Add element at `empty_space` index
    int empty_space = q->size + q->front;

    // The queue is out of capacity when the index of `empty_space is equals to `CAPACITY`
    if (empty_space == CAPACITY)
        printf("Out of capacity\n");
    else
    {
        // Add an element at array[empty_space] and increase the size
        q->array[empty_space] = value;
        q->size++; 
    }


    // if (empty_space == CAPACITY && q->front == 0)
    //     printf("Out of capacity\n");
    // else if (empty_space >= CAPACITY && q->front > 0)
    // {
    //     q->array[empty_space - CAPACITY] = value;
    //     q->size++;
    // }
    // else
    // {
    //     q->array[empty_space] = value;
    //     q->size++;
    // }
}

void dequeue(queue* q)
{
    q->front++;
    q->size--;
}