#ifndef __HEADER__
#define __HEADER__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 25
#define SUCCESS 0
#define FAILURE 1

typedef struct node{

	char* str;
	struct node* next;
}Node;

extern void myfflush(void);
extern void get_string_input(char*);

extern int push(Node**, char*);
extern int pop(Node**);
extern int create_list(Node**, int);

extern void display(Node*);
extern int free_list(Node**);

#endif
