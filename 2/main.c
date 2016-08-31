#include "mylib.h"

extern int count;
extern struct node* front;

void main()
{
    int no, i , k, elts,buf ,counter=1 ;
    printf("Please enter the values on n and i: ");
    scanf("%d%d",&no,&i);
    int m=i;
    
    printf("\nThe removal of sequence is as follows -\n");
    
    
    
    
    for(i=0;i<no;++i)                                                    //pushing data into stack 
        {
          push(i+1);
        }

         
    while(count>1)                                                      //count represents no. of elements in stack
    {
       for(k=1;k<m;++k){                                                //loop traverses till i, keeps on poping and pushing
         buf=pop();              
         count--;
         push(buf);
    }
                                                                        //finally required elt is popped out 
       
       
       
       printf("\n");
       
       if(count==no)
          printf("[%d].Firstly,the person at position %d is removed", counter++, pop());
       else if (count==1)
          printf("[%d].Finally,the person at position %d is removed", counter, pop());
       else
          printf("[%d].Then,the person at position %d is removed",counter++, pop());
                
       count--; 
          
        
     }       
    
       printf("\n\nHence the person at position %d surives",front->info);
    

}    

