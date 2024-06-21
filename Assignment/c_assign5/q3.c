#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isAnagram(char* a, char* b){
	
	int n = strlen(a);
	if(n != strlen(b))return 0;
	int hash[200] = {0};

	for(int i=0; i<n; i++){
		hash[a[i]-'A']++;
		hash[b[i]-'A']--;
	}

	for(int i=0; i<200; i++){
		if(hash[i]){
			return 0;
		}
	}

	return 1;
}

int main(){

	char *line = (char*)malloc(100*sizeof(char));
	char **str_arr;
	char *token;
	int n = 0, uniq_c = 0;
	str_arr = (char**)malloc(20*sizeof(char*));

	printf("\nEnter words seperated space: \n");
	fgets(line, 100, stdin);
	line[strlen(line)-1] = '\0';

	
	token = strtok(line, " ");
	while(token != NULL){
		
		int s_len = strlen(token);
		str_arr[n] = (char*)malloc(s_len*sizeof(char));
		strcpy(str_arr[n], token);
		token = strtok(NULL, " ");
		n++;
	}
	
	for(int i=0; i<n-1; i++){
		if(strcmp(str_arr[i], "100") == 0)continue;
		for(int j=i+1; j<n; j++){
			if(!strcmp(str_arr[i], str_arr[j])){
				strcpy(str_arr[j], "100");
				continue;
			}
			if(isAnagram(str_arr[i], str_arr[j])){
				strcpy(str_arr[j], "100");
			}
		}
	}
	
	printf("\nRemoving duplicates and anagrams:\n");
	for(int i=0; i<n; i++){
		if(!strcmp(str_arr[i], "100"))continue;
		printf("%s ", str_arr[i]);
		uniq_c++;
	}
	
	printf("\nNo of unique strings: %d\n\n", uniq_c);	
	

	for(int i=0; i<n; i++){
		free(str_arr[i]);
	}
	free(str_arr);
	free(line);

	return 0;
}
