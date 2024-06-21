/* Distinct products with highest sales amount
 * Author: Yug D
 * DOC: 29 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

typedef struct{
	char *p_id;
	int sales;
}Product;

int algo(char*);
int cmp(const void*, const void*);

int main(){
	
	char st[20];
	Product p[100];
	int k=0, len=0;
	int hash[1000000] = {0};
	char ans[100][100];

	printf("\nINPUT:\n");	
	while(scanf("%[^\n]%*c", st) == 1){
		
		len++;
		char* token = strtok(st, "-");
		p[k].p_id = (char*)malloc(100*sizeof(char));

		strcpy(p[k].p_id, token);
		token = strtok(NULL, "-");
		p[k].sales = atoi(token);
		k++;

	}

	for(int i=0; i<len; i++){
		
		//printf("%d\t", algo(p[i].p_id));	
		if(hash[algo(p[i].p_id)] < p[i].sales){
			hash[algo(p[i].p_id)] = p[i].sales;
		}
	}
	
	k=0;
	
	for(int i=0; i<len; i++){

		int val = hash[algo(p[i].p_id)];
		int* add = &hash[algo(p[i].p_id)];
		if(val == 0)continue;
		char *concate = (char*)malloc(100*sizeof(char));
		char *num = (char*)malloc(10*sizeof(char));
		strncpy(concate, p[i].p_id, 100);
		sprintf(num, "%d", val);
		strcat(concate, "-" );
		strcat(concate, num);
		strcpy(ans[k++], concate);
		//printf("%s-%d\n", p[i].p_id, val);
		*add = 0;
		free(concate);
		free(num);
		concate = NULL;
		num = NULL;
	}
	
	qsort(ans, k, sizeof(ans[0]), cmp);
	
	printf("\nOUTPUT\n");
	for(int i=0; i<k; i++){
		printf("%s\n", ans[i]);
	}

	for(int i=0; i<len; i++){
		free(p[i].p_id);
		p[i].p_id = NULL;
	}
	printf("\n\n");
}

int cmp(const void* str1, const void* str2){
	int n1=0, n2=0;
	
	char* s1 = (char*)malloc(20*sizeof(char));
	char* s2 = (char*)malloc(20*sizeof(char));
	
	strcpy(s1,(char*)str1);
	strcpy(s2,(char*)str2);

	char* token1 = strtok(s1, "-");
	token1 = strtok(NULL, "-");
	
	char* token2 = strtok(s2, "-");
	token2 = strtok(NULL, "-");

	int res = atoi(token2) - atoi(token1);
	
	free(s1);
	free(s2);
	s1 = NULL;
	s2 = NULL;
	return res;
}

int algo(char* str){
	int hash_key=0;
	int mul=1;
	int len = strlen(str);
	//printf("%s %d\n", str, len);
	for(int i=len-1; i>=0; i--){
		if(str[i]>='A' && str[i]<='Z'){
			hash_key += str[i]*mul;
			mul*=10;
			continue;
		}
		hash_key += (str[i]-'0')*mul;
		mul *= 10;
	}
	return hash_key;
}
