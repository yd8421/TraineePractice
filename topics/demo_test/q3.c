#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort(char** arr, int n){

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(strcmp(arr[j], arr[j+1]) > 0){
				char *temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}


}

int main(){

	char *str = (char*)malloc(50*sizeof(char));;
	char **arr = (char**)malloc(50*sizeof(char*));
	int len = 0, i=0;

	printf("\nEnter words seperated by pipe:\n");
	gets(str);

	char* token = strtok(str, "|");

	while(token != NULL){

		len++;
		arr[i] = (char*)malloc(50*sizeof(char));
		strcpy(arr[i], token);
		
		token = strtok(NULL, "|");
		i++;
	}

	sort(arr, len);
	
	printf("\nAfter sorting:\n");
	printf("|");
	for(int j=0; j<len; j++){
		printf("%s|", arr[j]);
	}
	printf("\n\n");
}
