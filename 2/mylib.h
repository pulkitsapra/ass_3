#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node *ptr;
};

void push(int data);   //pushes data into stack
int pop();             //pops data from stack
void display();        ///displays data in the stack


