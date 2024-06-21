#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int searchChar(char *sent, char ch){

	for(int i=0; i<strlen(sent); i++){
		if(sent[i] == ch){
			return i;
		}
	}
	
	return -1;
}

int searchWord(char* sent, char* word){

	int indWord = 0;
	char *token = strtok(sent, " ");
	
	while(token != NULL){
		
		if(!strcmp(token, word)){
			return indWord;
		}

		indWord += strlen(token)+1;
		token = strtok(NULL, " ");
	}

	return -1;
}

int main(){

	char *sentence = (char*)malloc(100*sizeof(char));
	char *word;
	char ch;
	int n, pos1 = -1, pos2 = -1;

	printf("\nEnter the sentence: ");
	fgets(sentence, 100, stdin);
	n = strlen(sentence);
	sentence[n-1] = '\0';
	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("Enter a word: ");
	scanf("%s", word);

	pos1 = searchChar(sentence, ch);
	pos2 = searchWord(sentence, word);

	printf("\nSum of positions %d and %d: %d\n\n", pos1, pos2, pos1+pos2);
	
	free(sentence);
	return 0;
}

