#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int remove1(char* str){

	int n = strlen(str), k=0;
	int f = 1;
	for(int i=0; i<n-1; i++){
		if((int)str[i+1] - (int)str[i] == 1){
			//printf("%d", i);
			while(i<n){
				str[i] = str[i+2];
				i++;
			}
			//printf("%s ", str);	
			f = 0;
			break;
		}
	}

	return f;
}
		
int main(){

	char *str = (char*)malloc(50*sizeof(char));;
	int len = 0, i=0;

	printf("\nEnter a word:\n");
	scanf("%s", str);
	
	int f = 0;
	while(1){
		if(f == 1) break;

		f = remove1(str);
	}

	printf("\nRemoving lexicographical consecutive letters:\n%s", str);
	printf("\n\n");
}
