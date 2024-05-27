/* Automorphic Number
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

int pow2(int n, int r){
	int pow=1;
	while(r--){
		pow *= n;
	}
	return pow;
}

int main(){
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	
	int len = digits(n);
	int mod = pow2(10,len);
	
	if(n == (int)pow2(n,2)%mod){
		printf("The number is automorphic\n\n");
	}
	else{
		printf("The number is not automorphic\n\n");
	}
	return EXIT_SUCCESS;
}
