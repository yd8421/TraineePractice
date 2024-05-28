/* Finding the missing no from 0 ... N
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
	int hash[100000] = {0};

	for(int i=0; i<n; i++){
		printf("Enter no%d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("Displaying the array:\n");
	
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\nMissing Value\n");

	for(int i=0; i<n; i++){
		hash[arr[i]]++;		
	}

	for(int i=0; i<=n; i++){
		if(hash[i] == 0){
			printf("%d", i);
		}
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}
