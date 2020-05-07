i#include <iostream>

using namespace std;

struct Stack
{
    int data;
    Stack *next;
} *TOS = NULL;
void Push(int value)
{
    Stack *new_node = new Stack();
    new_node -> data = value;
    new_node -> next = TOS;
    TOS = new_node;
}
