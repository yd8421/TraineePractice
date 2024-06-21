/* Remove Duplicates from string
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ll long long

int main(){

	char a[100];
	printf("\nEnter a string with duplicates: ");
	scanf("%s", a);
	
	int hash[100] = {0};

	for(int i=0; i<strlen(a); i++){
		if(hash[a[i]-'A'])continue;
		hash[a[i]-'A']++;
		printf("%c", a[i]);	
	}
	printf("\n\n");

	return EXIT_SUCCESS;
}
