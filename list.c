#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"list.h"

LNode* CreateEmptyList()
{
    LNode* head;
    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    head->data=-1;
    return head;
}
