#include<stdio.h>

int main()
{
	int no;
	printf("\nEnter a no: ");
	scanf("%d",&no);
	
	if(no%2==0)printf("Its an EVEN number\n\n");
	else printf("Its a ODD number\n\n");

	return 0;
}
