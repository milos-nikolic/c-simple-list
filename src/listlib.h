typedef int listData;

typedef struct node{
listData data;
struct node* next;
}node;

void listAddLast(node** head, listData data);
void listAddFirst(node** head, listData data);
void listFree(node** head);
int listGetSize(node** head);
void iterateToNext(node** iterator);
void iterateToLast(node** iterator);
void insertAtIterator(node** iterator, listData data);
node* listAt(node* head, int index);
void reverseElementOrder(node** head);
