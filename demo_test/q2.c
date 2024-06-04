#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char prev;
	int n;
	char* str = (char *)malloc(50*sizeof(char));
	
	printf("Enter a word:\n");
	scanf("%s", str);
	n = strlen(str);

	if(n == 1){
		printf("%s\n\n", str);
		return 0;
	}

	prev = str[0];
	
	printf("\nRemoving duplicates:\n");
	for(int i=1; i<n; i++){
		if(prev != str[i]){
			printf("%c", prev);
			prev = str[i];
		}
		else{
			while(i<n && prev == str[i]){
				i++;
			}
			prev = str[i];
		}	
	}

	if(n > 1 && str[n-1] != str[n-2]){
		printf("%c", prev);
	}
		
	printf("\n\n");
	
	return 0;
}

