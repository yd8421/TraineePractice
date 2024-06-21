#include<header.h>

void myflush(void);
void mainMenu(void);
void regMenu(void);
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
		printf("      1. New user\n");
		printf("      2. User Login\n");
		printf("      3. Call\n");
		printf("      4. exit\n");
		
		if(try<3){
			printf("\nWrong input. You have %d tries left. Try Again", try+1);
		}
		printf("\nEnter your choice(1-4): ");

		scanf("%d", &choice);
		myflush();

		switch(choice){

			case 1: regMenu();
				break;

			case 2: login();
				break;

			case 3: call();
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
void regMenu(void){}
void call(void){}

