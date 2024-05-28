/* Finding a Palindrome
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strrev_u(char*);

int main(){

	char a[100];
	printf("\nEnter a sentence: ");
	scanf("%[^\n]s", a);

	char b[100];
	strcpy(b,a);
	strrev_u(b);

	if(strcmp(a,b) == 0){
		printf("The given string IS a Palindrome!\n\n");
	}
	else{
		printf("The given string IS NOT a Palindrome\n\n");
	}
	return EXIT_SUCCESS;
}

void strrev_u(char* str){
	
	char* s = str, *e = str+strlen(str)-1;

	if(!str || !*str)return;

	while(s<e){
		char t = *s;
		*s++ = *e;
		*e-- = t;
	}
}
