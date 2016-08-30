#include "my_lib.h"


void main()
{
 
  int choice , data;
  while(1){
  printf("\nEnter your choice \n");
  printf("1:Insert into queue\n");
  printf("2:Delete from queue\n");
  printf("3:Display Queue\n");
  printf("4:Exit\n");
  
  scanf("%d",&choice);
  
  switch(choice){
  
  case 1:  {
            printf("Enter data\n");
            scanf("%d",&data);
            pushqueue(data);
            break;
           }
  case 2:  deletequeue();
            break;
  
  case 3:  displayqueue();
            break;
  
  case 4:  exit(0);          
            break;
  
  default: printf("Wrong choice\n"); 
  
    }
  
  }
   
}
