/* Sorting string array in lexicographical order
 * Author: Yug D
 * DOC: 27 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Bsort(char [][100], int);
int main(){

	int n;
	// char tmpbuf;
	printf("\nEnter the size of array: ");
	scanf("%d", &n);

	char str[n][100];

	for(int i=0; i<n; i++){
		printf("Enter string %d: ", i+1);
		scanf("%s", str[i]);
	}

	printf("\nDisplaying the string array:\n");
	for(int i=0; i<n; i++){
		printf("%s  ", str[i]);
	}
	
	//qsort(str, n, sizeof(char*), strcmp);
	Bsort(str, n);

	printf("\n\nDisplaying the sorted string array:\n");
	for(int i=0; i<n; i++){
		printf("%s  ", str[i]);
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}

void Bsort(char str[][100], int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(strcmp(str[j], str[j+1]) > 0){
				char t[100];
				strcpy(t, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], t);
			}
		}
	}
}

