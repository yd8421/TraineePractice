/* BMI Calculator -- Given height(m) and weight(kg) get BMI
 * Author: Yug
 * DOC: 24 May 2024 */

#include<stdio.h>

int main()
{
	float ht,wt,bmi;
	
	printf("\nEnter weight(kg): ");
	scanf("%f",&wt);
	printf("Enter height(m): ");
	scanf("%f",&ht);
	bmi = wt/(ht*ht);
	if(bmi<18.5){
		printf("Underweight");
	}
	else if(bmi<25){
		printf("Normal weight");
	}
	else if(bmi<30){
		printf("Overweight");
	}
	else printf("Obesity");

	printf("\n\n");

	return 0;
}
