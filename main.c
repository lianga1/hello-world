#include<stdio.h>
#include"list.h"
int main()
{
    LNode *L;
    L=CreateEmptyList();
    printf("%d",L->data);
    return 0;
}