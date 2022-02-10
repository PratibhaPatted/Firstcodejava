#include "fun.h"
#include "customer.c"
void display(struct customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}