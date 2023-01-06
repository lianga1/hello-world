#ifndef __LIST_H__
#define __LIST_H__
typedef struct node
{
    int data;
    struct node *next;
}LNode;

LNode *CreateEmptyList();

#endif