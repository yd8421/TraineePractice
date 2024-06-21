/* Nearest square
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>

#define ll long long

int main(){
	int n;
	int floorSq, ceilSq;

	printf("\nEnter any number: ");
	scanf("%d",&n);
	
	floorSq = sqrt(n);
	ceilSq = sqrt(n)+1;
	
	floorSq *= floorSq;
	ceilSq *= ceilSq;
	
	printf("Nearest square number: ");
	if(n-floorSq < ceilSq-n){
		printf("%d", floorSq);
	}
	else{
		printf("%d", ceilSq);
	}
	printf("\n\n");
	return EXIT_SUCCESS;
}
