/* Merging 2 sorted arrays into 1 sorted array
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define ll long long

int main(){
	int n, m;

	printf("\nEnter the length of array 1: ");
	scanf("%d", &n);

	int arr[n];

	for(int i=0; i<n; i++){
		printf("Enter no%d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nEnter the length of array 2: ");
	scanf("%d", &m);

	int arr2[m];
	
	for(int i=0; i<m; i++){
		printf("Enter no%d: ", i+1);
		scanf("%d", &arr2[i]);
	}

	int i = 0, j = 0;
	int arr3[n+m];

	while(i<n && j<m){
		if(arr[i] < arr2[j]){
			arr3[i+j] = arr[i];
			i++;
		}
		else{
			arr3[i+j] = arr2[j];
			j++;
		}
	}

	while(i<n){
		arr3[i+j] = arr[i];
		i++;
	}

	while(j<m){
		arr3[i+j] = arr2[j];
		j++;
	}
	
	printf("\nDisplaying Merged array:\n");
	for(int k=0; k < n+m; k++){
		printf("%d  ", arr3[k]);
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}
