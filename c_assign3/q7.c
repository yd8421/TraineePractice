/* Rotating array by k steps
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("\nEnter the length of array: ");
	scanf("%d", &n);

	int k;
	int arr[n], r_arr[n];

	for(int i=0; i<n; i++){
		printf("Enter no%d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("Enter the valuue of k: ");
	scanf("%d", &k);

	printf("Displaying the array:\n");
	
	for(int i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}

	for(int i=0; i<n; i++){
		r_arr[i] = arr[(i+k)%n];
	}

	printf("\nAfter rotation:\n");
	
	for(int i=0; i<n; i++){
		printf("%d\t",r_arr[i]);
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}
