#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int copy_file(FILE* inp, FILE* out){

	while(1){
		if(feof(inp)){
			break;
		}
		
		int ret = 0;		
		char ch = (char)fgetc(inp);

		if(isalpha(ch)){
			ch = toupper(ch);
			ret = fputc(ch, out);
			if(ret == EOF){
				return 0;
			}
		}
		else{
			ret = fputc(ch, out);
			if(ret == EOF){
				return 0;
			}
		}
	}
	return 1;
}

int display_file(FILE* f){

	while(1){
		if(feof(f)){
			break;
		}

		int ch;
		ch = (char)fgetc(f);
		
		//if(ch == EOF){
		//	return 0;
		//}
		
		printf("%c", ch);
	}
	printf("\n");
	
	return 1;
}

int main(){

	FILE* in_file = NULL, *out_file = NULL;
	int ret = 1;

	in_file = fopen("inp", "r");
	if(in_file == NULL){
		printf("opening 'inp' file failed\n");
		return EXIT_FAILURE;
	}

	out_file = fopen("out", "w+");
	if(out_file == NULL){
		printf("opening 'out' file dailed\n");
		return EXIT_FAILURE;
	}
	
	ret = copy_file(in_file, out_file);
	if(ret == 0){
		printf("error in copying file\n");
		return EXIT_FAILURE;
	}	
	
	rewind(out_file);

	ret = display_file(out_file);
	if(ret == 0){
		printf("error in displaying file\n");
		return EXIT_FAILURE;
	}

	ret = fclose(in_file);
	if(ret != 0){
		printf("error in closing 'inp' file\n");
		return EXIT_FAILURE;
	}

	ret = fclose(out_file);
	if(ret != 0){
		printf("error in closing 'out' file\n");
		return EXIT_FAILURE;
	}

	return 0;
}
