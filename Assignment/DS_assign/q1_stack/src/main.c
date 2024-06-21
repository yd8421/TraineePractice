#include<header.h>

int main(){
	
	Node* head;
	
	while(1){
		
		system(clear);
		char string[SIZE];

		memset(string, 0, SIZE);

		printf("\n****************STACK FUNCTIONS*************\n");
		printf("\t1. Push\n");
		printf("\t2. Pop\n");
		printf("\t3. Display\n");
		printf("\t4. Exit\n");
		printf("\nEnter your choice(1-3):\n");
		scanf("%d", &choice);
		myfflush();

		switch(choice){

			case 1: printf("\nEnter a string: ");
				get_string_input(string);
				if(SUCCESS == push(&head, string)){
					printf("\nPush operation success\n");
				}
				else{
					printf("\nFailed to Push\n");
				}
				break;

			case 2: if(pop(&head) == SUCCESS){
					printf("\nPop operation success\n");
				}
				else{
					printf("\nPop failed\n");
				}
				break;

			case 3: display(head); 
				break;

			case 4: free_list(&head);
				printf("\nExit Success\n");
				return EXIT_SUCCESS;
				break;

			default: printf("\nWrong key. Try Again\n");

		}
		printf("\nEnter to continue ...\n");
		myfflush();
	}

	return EXIT_SUCCESS;
}
