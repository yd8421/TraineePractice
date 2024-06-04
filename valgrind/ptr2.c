#include<stdio.h>
#include<stdlib.h>
 
//Demo code to demonstrate indirectly lost error
 
//Employee structure
typedef struct emp
{
    int data;
    struct emp *next;
}EMP;
 
EMP *ftest()
{
    EMP *e = (struct emp*)malloc(sizeof(struct emp));
 
    if (e)
    {
        e->data = 10;
        e->next = (struct emp*)malloc(sizeof(struct emp));
        e->next->data = 20;
        e->next->next = NULL;
    }
    return e;
}
 
int main(int argc, char *argv[])
{
    int i = 0;
    EMP *ptr = ftest();
 
    printf("\n Test hello\n");
  free(ptr);
    return 0;
}
