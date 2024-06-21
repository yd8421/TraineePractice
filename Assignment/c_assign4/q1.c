#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palin_score( char* str, int i, int n){
	
	int is_palin = 1, score = 0;

	//calculating for lenght 4
	for(int j=0; j<2; j++){
		if(str[i+j] != str[i+3-j]){
			is_palin = 0;
			break;
		}
	}
	
	if(is_palin){
		score += 5;
	}

	is_palin = 1;

	//calculating for length 5
	if(i+4 >= n){
		return score;
	}

	for(int j=0; j<2; j++){
		if(str[i+j] != str[i+4-j]){
			is_palin = 0;
			break;
		}
	}
	
	if(is_palin){
		score += 10;
	}

	return score;
}
	
int main()
{
	char *str = (char*)malloc(100*sizeof(char));
	int  n, score = 0;

	printf("\nEnter a string: ");	
	scanf("%s", str);
	
	n = strlen(str);

	for(int i=0; i<n-3; i++){
		score += palin_score(str, i, n);
	}

	printf("The score of the given string: %d\n\n", score);
	
	free(str);
	return 0;
}


