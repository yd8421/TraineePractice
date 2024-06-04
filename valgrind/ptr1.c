#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
      int *i;
       int *j;
	int k;
       int x = 10;
         i = (int *)malloc(sizeof(int));  //Allocating dynamic memory
       if(NULL == i)
         {
                 printf("\nMemory allocation failed\n");
                exit(EXIT_FAILURE);
          }
       j = (int *)malloc(sizeof(int));  //Allocating dynamic memory
        if(NULL == j)
         {
                 printf("\nMemory allocation failed\n");
                 exit(EXIT_FAILURE);
         }
       printf("\nenter value for i :\n");
        scanf("%d",i);
         printf("\nEnter the value for j:\n");
        scanf("%d",j);
	free(j); 
        j = &x;    //now j is pointing to the address of x
 
         k  = *i + *j;
          printf("\nThe sum is %d\n",k);
         free(i);   //Freeing the memory
        // free(j);   //Freeing the momory
         return 0;
  }
