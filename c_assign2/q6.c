/* Leaders in array -- greatest from right
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define ll long long

int main(){
	int n;
	printf("\nEnter the length of array: ");
	scanf("%d", &n);

	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter no%d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("Displaying the array:\n");
	
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\nPrinting the leaders:\n");
	
	int lead = INT_MIN;

	for(int i=n-1; i>=0; i--){
		if(arr[i] > lead){
			printf("%d\t", arr[i]);
			lead = arr[i];
		}
	}
	printf("\n\n");

	return EXIT_SUCCESS;
}
