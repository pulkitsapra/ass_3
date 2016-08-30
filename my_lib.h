#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node
{
   int data;
   struct node *next;   


};

void stack_push( struct node **ptr,int item);                        // function to push data into stack
int stack_pop(struct node **ptr);                                    //function to pop data from stack
void stack_display();                                                //function to display elements in a stack
void pushqueue(int item);                                            //pushes data into a queue
int deletequeue();                                                   //deletes data from queue
void displayqueue();                                                 //display elements in  a queue 



 

