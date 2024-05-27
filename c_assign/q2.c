
#include<stdio.h>
#define PI 22.0/7.0

int main()
{
	float r;
	printf("\nEnter radius: ");
	scanf("%f",&r);
	printf("Area: %f\nCircumference: %f\n\n",PI*r*r,2*PI*r);
	return 0;
}
