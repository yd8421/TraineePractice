/* Reversing the order of words
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ll long long

int main(){

	char a[100];
	printf("\nEnter a sentence: ");
	scanf("%[^\n]s", a);

	char *token = strtok(a, " ");
	char *ans[100];
	int n_words = 0;

	while(token != NULL){
		
		ans[n_words++] = token;
		token = strtok(NULL, " ");		
	}	

	for(int i = n_words-1; i>=0; i--){
		printf("%s ", ans[i]);
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}
