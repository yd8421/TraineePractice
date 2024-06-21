#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char **T1, **T2;
	int n;


	printf("\nEnter number n: ");
	scanf("%d", &n);
	T1 = (char**)malloc(n*sizeof(char*));
	T2 = (char**)malloc(n*sizeof(char*));

	for(int i=0; i<n; i++){

		T1[i] = (char*)malloc(30*sizeof(char));
		T2[i] = (char*)malloc(30*sizeof(char));
		printf("Enter time range%d: (hh|mm|ss) (hh|mm|ss): ", i);
		scanf("%s%s", T1[i], T2[i]);
	}
	for(int i=0; i<n; i++){
		if(strcmp(T1[i], T2[i]) < 0){
			printf("\nEarlier");
		}
		else if(strcmp(T1[i], T2[i]) > 0){
			printf("\nLater");
		}
		else{
			printf("\nEqual");
		}
	}

	for(int i=0; i<n; i++){
		free(T1[i]);
		free(T2[i]);
	}
	free(T1);
	free(T2);

	printf("\n\n");

	return 0;
}


