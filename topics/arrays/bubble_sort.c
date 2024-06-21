
/*
Impementing Bubble Sort on array 
Author: Yug D
DOC: 23-May-2024
*/

#include<stdio.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n){
	int swapped=0;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
				swapped = 1;
			}
		}
		if(!swapped)break;
	}
}

int main(){
	int n;
	int k;

	printf("\nEnter no of elements you want to enter: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		printf("Enter no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Displaying the array:\n");
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	bubbleSort(arr,n);

	printf("\nAfter Sorting the array:\n");
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n\n");
	return 0;
}
