/* Binary to Decimal --- using while loop
 * Author: Yug
 * DOC: 24 May 2024 */

#include<stdio.h>

int main()
{
	int t;
	
	printf("\nEnter current temperature(Celcius): ");
	scanf("%d",&t);
	if(t<10){
		printf("It's cold outside, stay warm!");
	}
	else if(t<20){
		printf("It's a bit chilly, wear a jacket");
	}
	else if(t<=30){
		printf("The weather is nice and warm");
	}
	else printf("It's hot outside, stay hydrated!");

	printf("\n\n");

	return 0;
}
