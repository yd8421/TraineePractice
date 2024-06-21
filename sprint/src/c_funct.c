#include<header.h>

void myflush(void);
void mainMenu(void);
void registerUser(void);
void login(void);
void call(void);

void myflush(void){
	while(getchar() != '\n');
}

void mainMenu(void){
	
	int try = 4;
	while(try--){

		system("clear");

		int choice;

		printf("******************************************\n");
		printf("          Welcome to Main Menu            \n");
		printf("******************************************\n\n");
        	printf("\t1. Make a phone call\n");
        	printf("\t2. Register for CFS\n");
        	printf("\t3. Login to CFS\n");
        	printf("\t4. Exit\n");
		printf("\n******************************************\n");
		
		if(try<3){
			printf("\nWrong input. You have %d tries left. Try Again", try+1);
		}
		printf("\nEnter your choice (1-4): ");

		scanf("%d", &choice);
		myflush();

		switch(choice){

			case 1: call();
				break;

			case 2: registerUser();
				break;

			case 3: login();
				break;

			case 4: 
				break;

			default:
				continue;
		}
		break;
	}
	printf("\nExiting the program\n\n");
}

void login(void){}
void registerUser(void){}
void call(void){}

