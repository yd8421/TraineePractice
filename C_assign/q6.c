
/* Binary to Decimal --- using while loop
 * Author: Yug
 * DOC: 24 May 2024 */

#include<stdio.h>

int main()
{
	int a,b,c;
	printf("\nEnter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("largest of all: %d\n\n",(a>b?(a>c?a:(b>c?b:c)):(b>c?b:c)));
}
