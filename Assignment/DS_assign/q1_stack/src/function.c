#include<header.h>

void myfflush(){
	while(getchar() != '\n');
}

void get_string_input(char* str){

	while(1){
		fgets(str, 99, stdin);;
		if(strlen(str) == 1){
			printf("\nEmpty input, Enter again\n");
			memset(str, 0, SIZE);
			continue;

		}
		if(str[strlen(str)-1] == '\n'){
			str[strlen(str)-1] = '\0';
		}
		else{
			myfflush();
		}
		break;
	}
}

int push(Node** head, char* str){
	
	Node* new_node = NULL;

	if(create_node(&new_node, strlen(str)+1) == NULL){
		printf("\nError while creating node\n");
		return FAILURE;
	}

	strcpy(new_node->str, str);

	new_node->next = *head;
	*head = new_node;
	return SUCCESS;
}

int pop(Node**){
	
	Node* temp = *head;

	if(temp == NULL){
		printf("\nThis is an empty stack\n");
		return FAILURE;
	}

	*head = (*head)->next;
	free((*head)->str);
	free(*head);

	return SUCCESS;
}

extern int create_list(Node**, int);

extern void display(Node*);
extern int free_list(Node**);

#endif


