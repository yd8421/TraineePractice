

/* Binary to Decimal --- using while loop
 * Author: Yug
 * DOC: 24 May 2024 */

#include<stdio.h>

int main()
{
	int sc;
	char grad;
	printf("\nEnter the score(0-100): ");
	scanf("%d",&sc);
	if(sc<60){
		grad = 'F';
	}
	else if(sc<70){
		grad = 'D';
	}
	else if(sc<80){
		grad = 'C';
	}
	else if(sc<90){
		grad = 'B';
	}
	else if(sc<=100){
		grad = 'A';
	}
	else grad = '!';

	printf("Grade: %c\n\n",grad);
}
