#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void strreverse(char *);

int main(){
	char line[1024];
	char *token = (char *) malloc(1024); //void
	printf("Enter a line of text\n");
	scanf("%[^\n]s", line);
	//all.the.best
	printf("%s\n", line);
	token = strtok(line, ".");
	while(token != NULL)
	{
		strreverse(token);
		printf("%s\naddr: %u\n", token, token);
		token = strtok(NULL, ".");
		//token++;
	}

	printf("\n\n");
	return EXIT_SUCCESS;
}

void strreverse(char * token)
{
	int i, j;
	int len = strlen(token);
	char t;

         //helloworld

        for(i=0, j=len-1; i < j; i++ , j--)
        {
		t = token[i];
        	token[i] = token[j];
        	token[j] =t;
        }
}
