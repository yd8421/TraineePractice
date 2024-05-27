/* Armstrong Number
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>

#define ll long long

int digits(int n){
	int c=0;
	while(n){
		n/=10;
		c++;
	}
	return c;
}

int main(){
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	
	int len = digits(n);
	int m=0;
	int tmp = n;

	while(tmp){
		m += (int)pow((tmp%10), len);
		tmp/=10;
	}	

	if(n == m){
		printf("This is an Armstrong\n\n");
	}
	else{
		printf("The number is not an Armstrong number\n\n");
	}
	return EXIT_SUCCESS;
}
