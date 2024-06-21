#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char *s1, *s2, *s3;
	int n, m, k, f=1;
	int hash[26] = {0};
	
	s1 = (char*)malloc(20*sizeof(char));
	s2 = (char*)malloc(20*sizeof(char));
	s3 = (char*)malloc(40*sizeof(char));

	printf("\nEnter string1: ");
	scanf("%s", s1);
	printf("Enter string2: ");
	scanf("%s", s2);
	printf("Enter the MEGA string: ");
	scanf("%s", s3);

	n = strlen(s1);
	m = strlen(s2);
	k = strlen(s3);

	if(n+m != k){
	
		printf("\n String3 cannot be created from string1 and string2\n\n");
		return EXIT_SUCCESS;
	}

	for(int i=0; i<n; i++){
		
		hash[s1[i] - 'a']++;
	}

	for(int i=0; i<m; i++){
		
		hash[s2[i] - 'a']++;
	}

	for(int i=0; i<k; i++){
		
		hash[s3[i] - 'a']--;
	}

	for(int i=0; i<26; i++){

		if(hash[i] != 0){
	
			f = 0;
		}
	}

	if(f){
		printf("\nString3 can be created using the given two strings\n\n");
	}
	else{
		printf("\nString3 cannot be created from string1 and string2\n\n");
	}

	free(s1);
	free(s2);
	free(s3);
	return 0;
}
