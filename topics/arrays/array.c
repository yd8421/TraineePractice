
/*
Array input output 
Yug D
DOC: 23-May-2024
*/

#include<stdio.h>

int main(){
	int n;
	printf("\nEnter no of elements you want to enter: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0; i<n; i++){
		printf("Enter no%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Printing array:\n");
	for(int i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n\n");
	return 0;
}
