#include "fun.h"
#include "customer.c"

void deposit(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        list[i].balance += amt;
    }
}