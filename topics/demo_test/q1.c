#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void capitalize_print(char* str){
	
	char* token = strtok(str, " ");
	*token = toupper(*token);
	
	printf("\nCapitalizing first letter:\n");
	while(token != NULL){
		
		printf("%s ", token);
		token = strtok(NULL, " ");
		
		if(token == NULL)break;
		
		*token = toupper(*token);
	}
	printf("\n\n");

}

int main(){
	char* str;
	str = (char *)malloc(50*sizeof(char));
	printf("Enter a sentence:\n");
	gets(str);

	capitalize_print(str);

	return 0;
}

