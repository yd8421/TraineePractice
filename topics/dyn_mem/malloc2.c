#include <stdio.h>
#include <stdlib.h> /* required for the malloc and free functions */

#define mAX 100
  
int main(){
     
	int number;

   	int *ptr;
  	int i;

   	printf("How many ints would you like store? ");
  	scanf("%d", &number);

   	ptr = malloc(number*sizeof(int)); /* allocate memory */

   	if(ptr!=NULL)
   	{
     		for(i=0 ; i<number ; i++)
    		{	
       			//*(ptr+i) = i;
       			scanf("%d", ptr+i);
     		}

     		for(i=number ; i>0 ; i--)
     		{
       			printf("%d\n", *(ptr+(i-1))); /* print out in reverse order */
     		}

     	
		free(ptr); /* free allocated memory */
     		ptr = NULL;
     		return 0;
   	}
   	else
   	{
     		printf("\nMemory allocation failed - not enough memory.\n");
     		return 1;
	}
}
