#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#define MAX 50
#define ROW 2

int main(){
  
	char *str1 = NULL, *str2 = NULL;

 	char mess[ROW][MAX] = {
             "Dynamic Memory allocation",
             "malloc calloc realloc",
                };
  	str1 = (char *)malloc(MAX * sizeof(char));
  	if(NULL == str1)
  	{
    		printf("Malloc failed\n");
  	}
	
	printf("\nBefor memset: %s", str1);
  	memset(str1, 0, MAX);
	printf("\nAfter memset: %s", str1);

  	strncpy(str1,"This is string1\n", MAX - 1);
  	printf("\nstr1 = %s\n", str1);

  	str2 = (char *)malloc(MAX * sizeof(char));
  	if(NULL == str2)
  	{
    		printf("Malloc failed\n");
  	}

  	memset(str2, 0, MAX);

  	strncpy(str2,"This is string2\n", MAX - 1);
  	printf("str2 = %s\n", str2);


/*  	str1 = str2;
  	printf("str1 = %s\n", str1);
   	printf("str2 = %s\n", str2);*/

 /*  	if(str1 != NULL)
       	strncpy(str2, str1, MAX - 1);


  	printf("Before free\n");
   	printf("str1 = %s\n", str1);
   	printf("str2 = %s\n", str2);
   	free(str1);
   	free(str2);
   	str1 = NULL;
   	str2 = NULL;
  	printf("After free\n");
   	printf("str1 = %s\n", str1);
   	printf("str2 = %s\n", str2);*/

  	str2 = strncat(mess[0],mess[1],MAX-1);

  	printf("main: First string is : %s \n", mess[0]);
  	printf("main: Second string is : %s \n", mess[1]);

  	printf("str2 = %s\n", str2);
     	free(str1);
     	free(str2);
     	str1 = NULL;
     	str2 =NULL;

  	return 0;
}
