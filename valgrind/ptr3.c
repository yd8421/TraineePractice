#include <stdio.h>
#include <stdlib.h>
 
//Employee structure
typedef struct emp
{
    int data;
    struct emp *next;
}EMP;
 
 
//case 1:
//Root->N1->N2--> causes 2 definitely(root, N2) and 1 indirect(for N1)
EMP *ftest2()
{
    EMP *nextnode = NULL;
 
    EMP *nextnode2 = NULL;
    EMP *root = (struct emp*)malloc(sizeof(struct emp));
    root->data = 10;
 
    root->next = (struct emp*)malloc(sizeof(struct emp));
    root->next->data = 20;
    root->next->next = NULL;
 
    nextnode = root->next;
    nextnode->next = (struct emp*)malloc(sizeof(struct emp));
    nextnode->data = 20;
    nextnode->next = NULL;
    free(root->next);
    return root;
}

int main(){

	EMP* root = ftest2();
	return 0;
}
