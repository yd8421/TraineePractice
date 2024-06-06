#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	int n, tot_cons = 0, cons_yet = 0, ans = 0;
	char *word = (char*)malloc(30*sizeof(char));
	
	printf("\nEnter a string: ");
	scanf("%s", word);
	
	n = strlen(word);
	
	for(int i=0; i<n; i++){
		if(word[i] != 'a' && word[i] != 'e' && word[i] != 'u' && 
				word[i] != 'o' && word[i] != 'i'){
			tot_cons++;
		}
	}
	
	for(int i=0; i<n-1; i++){
		if(word[i] != 'a' && word[i] != 'e' && word[i] != 'u' && 
				word[i] != 'o' && word[i] != 'i'){
			cons_yet++;
		}
		if(i != 0 && cons_yet > tot_cons - cons_yet){
			ans++;
		}
	}

	printf("\nNo of partitions: %d\n\n", ans);


	free(word);
	return 0;
}
