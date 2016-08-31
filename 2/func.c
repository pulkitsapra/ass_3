#include "mylib.h"

struct node *front =NULL, *rear=NULL, *temp=NULL;

int count =0;

void push(int data)
{
    if (front == NULL)                                                  //pushing initial element into a stack
    {
  
       rear=(struct node *)malloc(1*sizeof(struct node));
       rear->ptr = NULL;
       rear->info = data;
       front =rear;
        
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        rear->ptr=temp;
        temp->ptr = NULL;
        temp->info = data;
        
        rear = temp;
    }
    count++;
    
}
 
/* Display stack elements */
void display()
{
    struct node* tmp;
    tmp=front;
 
    if((rear == NULL)&&(front==NULL))                                   //no element in stack
          return;
    
 
    while(tmp!= rear)
    {
        printf("%d ",tmp->info);
        tmp = tmp->ptr;
    }
    
    if(tmp == rear)
        printf("%d",tmp->info);
}
 
/* Pop Operation on stack */
int pop()
{
    temp=front;
 
    if (front == NULL)                                          //popping from a empty stack
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    
    else if (front==rear)                                       // only 1 element left in stack so popped and pointers declared NULL
    {
       free(temp);
       rear=front=NULL;
       return;
    } 
    else {
       front=front->ptr;
       temp->ptr=NULL;
       return(temp->info);
       free(temp);
     }   
    
    
}

