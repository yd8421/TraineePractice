/*
Impementing Linear Search on array 
Author: Yug D
DOC: 23-May-2024
*/

#include<stdio.h>

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

	int t=5;
	while(t--){
		printf("\nEnter the element to be searched: ");
		scanf("%d",&k);
	
		int i;
		for(i=0; i<n; i++){
			if(arr[i] == k){
				break;
			}
		}
		printf("\n");
		if(i==n){
			printf("Number not found");
		}
		else{
			printf("Number %d found at %dth index", k, i);
		}
		
		char opt;
		printf("\n\nSearch another value?(y/n) ");
		scanf(" %c",&opt);

		if(opt=='n')break;
		else t++;
	}
	printf("\n\n");
	return 0;
}
