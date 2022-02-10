#include "fun.h"
#include "customer.c"
void accept(struct customer list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        list[i].balance = 0;
    } 
}