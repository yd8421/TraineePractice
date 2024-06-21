#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char *s1, *s2;
	int n, f=1;
	int hash[26] = {0};
	
	s1 = (char*)malloc(20*sizeof(char));
	s2 = (char*)malloc(20*sizeof(char));

	printf("\nEnter 2 strings seperated by space or enter:\n");
	scanf("%s%s", s1, s2);

	n = strlen(s1);

	for(int i=0; i<n; i++){
		
		hash[s1[i] - 'a']++;
		hash[s2[i] - 'a']--;
	}

	for(int i=0; i<26; i++){

		if(hash[i] != 0){
	
			f = 0;
		}
	}

	if(f && strlen(s1) == strlen(s2)){
		printf("\nSecond string can be created using the first\n\n");
	}
	else{
		printf("\nSecond string can not be made using the first\n\n");
	}

	free(s1);
	free(s2);
	return 0;
}
