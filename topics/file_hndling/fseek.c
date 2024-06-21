#include <stdio.h>
#include <string.h>

 #define SIZE 32
 #define MAX 4

 int main()
 {
  FILE *file_ptr = NULL;
  char *strings[MAX] = {"This", "is", "a", "test"};
  int index = 0; /* for loop index */
  long int skipback = 0L;
 int ret_val = 0;
  char data[SIZE];

 file_ptr = fopen("myfile", "w");
  if(NULL == file_ptr)
  {
   printf("Error in opening the file\n");
   return 0;
  }

  for(index = 0; index < MAX; index += 1)
  {
   ret_val = fprintf(file_ptr,"%s ",strings[index]);
   if(0 == ret_val) /* Error check for fprintf */
   {
    printf("Writing failed\n");
   }
  }
  ret_val = fclose(file_ptr);
  if(0 != ret_val)
  {
   printf("Closing the file failed\n");
   return 0;
  }

  file_ptr = fopen("myfile", "r");
  if(NULL == file_ptr)
  {
   printf("Error in opening the file\n");
  return 0;
  }

  while(1)
  {
  memset(data,0,SIZE); /* Initializing the array */
   skipback = ftell(file_ptr);
  printf("Current position is %ld\n", skipback);

   ret_val = fscanf(file_ptr, "%s", data);
   if(EOF == ret_val) /* EOF reached */
   {
    printf("No more strings\n");
    break;
   }

   printf("Data is %s\n", data);

   //rewind(file_ptr); 
   fseek(file_ptr, skipback, SEEK_SET);
  if(-1 == ret_val) // Error check for fseek
   {
    printf("fseek failed\n");
   }
  ret_val = fscanf(file_ptr, "%s", data);
   if(EOF == ret_val) /* EOF reached */
   {
    printf("No more strings\n");
    break;
   }
   printf("Data is %s\n", data);
  }
  return 0;
 }
