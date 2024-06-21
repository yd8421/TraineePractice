/* Checking if two strings are anagram
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ll long long

int main(){

	char a[100], b[100];
	printf("\nEnter string1: ");
	scanf("%s", a);
	printf("Enter string2: ");
	scanf("%s", b);
	
	int hash[100] = {0};

	for(int i=0; i<strlen(a); i++){
		
		hash[b[i]-'A']--;
		hash[a[i]-'A']++;
	}

	int flag = 0;
	for(int i=0; i<100; i++){
		if(hash[i] != 0){
			flag = 1;
			break;
		}
	}

	if(flag){
		printf("The given strings are not anagram");
	}
	else{
		printf("The given strings are anagram");
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}
