
#include<stdio.h>
#define PI 22.0/7.0

int main()
{
	int opt;
	float r;

	printf("\nSelect option(1 or 2)\n");
	printf("1. Celcius to Fahrenheit\n2. Fahrenheit to Celcius\n");
	scanf("%d",&opt);
	
	if(opt == 1)
	{
		printf("Enter Celcius: ");
		scanf("%f",&r);
		printf("Fahrenheit: %0.1f",r*1.8+32);
	}
	else{
		printf("Enter Fahrenheit: ");
		scanf("%f",&r);
		printf("Celcius: %0.1f",(r-32)*5/9);
	}
	printf("\n\n");
	return 0;
}
