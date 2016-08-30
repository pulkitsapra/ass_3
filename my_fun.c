#include "my_lib.h"

 struct node *ptr=NULL, *stack1=NULL , *stack2=NULL;

void stack_push( struct node **ptr,int item)
{
 
    struct node *temp=NULL;
   
    if((*ptr)==NULL){
        (*ptr) =(struct node *)malloc(1*sizeof(struct node));
        (*ptr)->data=item;
        (*ptr)->next=NULL;
        
     }   
     
    else{
        temp=(struct node *)malloc(1*sizeof(struct node));
        temp->data=item;
        temp->next=(*ptr);
        (*ptr)=temp;
    }
}
 
int stack_pop(struct node **ptr)
{
    if ((*ptr)==NULL)
        return INT_MIN;
    
    else{
        struct node *temp=(struct node*)malloc(1*sizeof(struct node));
        temp=(*ptr);
        (*ptr)=(*ptr)->next;
        temp->next=NULL; 
        return temp->data;
   }
}

void stack_display()
{
   
  struct node *temp=(struct node*)malloc(1*sizeof(struct node)); 
  if (stack2==NULL)
    printf("No element in queue");
  else {
    temp=stack2;                                                                                    
    while(temp!=NULL){
      printf("%d ",temp->data);
      temp=temp->next;
    }
  }
  

}

void pushqueue(int item)
{

 stack_push(&stack1,item);
  
}

int deletequeue()
{
   while(stack1!=NULL)
    {
       stack_push(&stack2,stack_pop(&stack1));         
    }
    
   stack_pop(&stack2);
    
   while(stack2!=NULL)
    {
       stack_push(&stack1,stack_pop(&stack2));         
    } 
 
}


void displayqueue()
{
  while(stack1!=NULL)
    {
       stack_push(&stack2,stack_pop(&stack1));         
    }
    stack_display(stack2); 
  
  while(stack2!=NULL)
    {
       stack_push(&stack1,stack_pop(&stack2));         
    }
    
}

