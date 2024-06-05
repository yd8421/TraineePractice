/* Remove last occurence of a given string
 * Author: Yug D
 * DOC: 05 June 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *sentence = (char*)malloc(100*sizeof(char));
	char *token, *word = (char*)malloc(10*sizeof(char));
	char **words = (char**)malloc(20*sizeof(char*));
	int len = 0, ind = -1;
	
	printf("\nEnter a sentence:\n");
	fgets(sentence, 100, stdin);
	sentence[strlen(sentence)-1] = '\0';

	printf("Enter the word to remove: ");
	scanf("%s", word);

	token = strtok(sentence, " ");

	while(token != NULL){

		int n_word = strlen(token);
		words[len] = (char*)malloc((n_word+1)*sizeof(char));
		strcpy(words[len], token);
		if(strcmp(words[len], word) == 0){
			ind = len;
		}
		token = strtok(NULL, " ");
		len++;
	}
	
	if(ind == -1){
		printf("No such word found in the sentence\n\n");
		return EXIT_FAILURE;
	}
	
	printf("\nRemoving the last occurence of the given word:\n");
	for(int i=0; i<len; i++){
		if(i == ind)continue;
		printf("%s ", words[i]);
	}
	printf("\n\n");
	
	for(int i=0; i<len; i++){
		free(words[i]);
	}
	free(words);
	free(sentence);
	return 0;
}
