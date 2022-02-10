
#include<stdio.h>
#include "customer.c"
#ifndef __FUN_H
#define __FUN_H

  void accept(struct customer[], int);
  void display(struct customer[], int);
  int search(struct customer[], int, int);
  void deposit(struct customer[], int, int, int);
  void withdraw(struct customer[], int, int, int);
#endif