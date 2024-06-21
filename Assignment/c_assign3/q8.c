/* Common elements between 2 arrays
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define ll long long

int main(){
	int n, m;
	int hash[10000] = {0};

	printf("\nEnter the length of array 1: ");
	scanf("%d", &n);

	int arr[n];

	for(int i=0; i<n; i++){
		printf("Enter no%d: ", i+1);
		scanf("%d", &arr[i]);
		hash[arr[i]]++;
	}

	printf("\nEnter the length of array 2: ");
	scanf("%d", &m);

	int arr2[m];

	for(int i=0; i<m; i++){
		printf("Enter no%d: ", i+1);
		scanf("%d", &arr2[i]);
	}
	printf("\nDisplaying the arrays:\n");
	
	printf("Array 1: ");
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\nArray 2: ");
	for(int i=0; i<m; i++){
		printf("%d\t", arr2[i]);
	}

	printf("\n\nComon elements from the 2 arrays:\n");
	for(int i=0; i<m; i++){
		if(hash[arr2[i]]){
			printf("%d\t", arr2[i]);
		}
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}
