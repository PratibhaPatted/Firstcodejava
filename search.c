#include "fun.h"
#include "customer.c"

int search(struct customer list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}
