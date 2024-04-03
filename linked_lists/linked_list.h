typedef struct node
{
    int number;
    struct node *next;
} node;

node* create(int value);
int find(node* head, int value);
node* insert(node* head, int value);
void destroy(node* head);
void print_elements(node* head);