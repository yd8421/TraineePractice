/* BMI Calculator -- Given height(m) and weight(kg) get BMI
 * Author: Yug
 * DOC: 24 May 2024 */

#include<stdio.h>

int main()
{
	int a,b;
	char op;
	printf("\nEnter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the operator(+,-,*,/): ");
	scanf(" %c",&op);
	printf("Result: ");
	switch(op){
		case '+':printf("%d",a+b);
			 break;
		case '-':printf("%d",a-b);
			 break;
		case '*':printf("%d",a*b);
			 break;
		case '/':printf("%d",a/b);
			 break;
		default:printf("Wrong operator");
	}
	printf("\n\n");
	return 0;
}
