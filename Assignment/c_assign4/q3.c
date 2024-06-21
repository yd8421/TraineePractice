
/* Remove last occurence of a given string
 * Author: Yug D
 * DOC: 05 June 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *sentence = (char*)malloc(100*sizeof(char));
	char rep, rem;
	int len, flag = 1;

	printf("\nInput string: ");
	fgets(sentence, 100, stdin);
	len = strlen(sentence);
	sentence[len-1] = '\0';

	printf("Input character to replace: ");
	scanf(" %c", &rep);

	printf("Input character to replace with: ");
	scanf(" %c", &rem);

	printf("\nString after replacing '%c' with '%c': ", rem, rep);
	for(int i=0; i<len; i++){
	
		if(flag && sentence[i] == rem){
			sentence[i] = rep;
			flag = 0;
		}

		printf("%c", sentence[i]);
	}
	printf("\n\n");

	free(sentence);
	return EXIT_SUCCESS;

}
