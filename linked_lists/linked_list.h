#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef struct node
{
    int number;
    struct node *next;
    struct node *prev;
} node;

node* create(int value);
node* find(node* head, int value);
node* insert(node* head, int value);
void destroy(node* head);
void delete(node* head, node* target);
void print_elements(node* head);

#endif