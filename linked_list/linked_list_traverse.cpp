#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int number;
    struct Node *address;
};
int main()
{
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    struct Node *d = NULL;

    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));
    d = (struct Node *)malloc(sizeof(struct Node));

    a->number = 5;
    b->number = 10;
    c->number = 15;
    d->number = 20;

    a->address = b;
    b->address = c;
    c->address = d;
    d->address = NULL;
    int i = 0;
    while (a->address != NULL)
    {
        cout << a->number << endl;
        a=a->address;
        i++;
    }
    cout << "number of node is " << i << endl;

    return 0;
}