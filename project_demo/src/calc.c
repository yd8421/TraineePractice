#include<stdio.h>
#include<stdlib.h>
#include<calcfn.h>

int main(int argc, char* argv[]){
	
	printf("\nPrinting arguements:\n");
	for(int i=0; i<argc; i++){
		printf("Arg %d: %s\n", i, argv[i]);
	}

	printf("Implementing calculator from command line arguement\n");

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char op = argv[2][0];

	switch(op){
		case '+': printf("Add: %d", add(a,b));
			  break;

		case '-': printf("Sub: %d", sub(a,b));
			  break;

		case '*': printf("Mult: %d", mul(a,b));
			  break;

		case '/': printf("Div: %d", divi(a,b));
			  break;

		default: printf("Wrong operator, rerun program");
			 break;
	}
	printf("\n\n");
	
	return EXIT_SUCCESS;
}
