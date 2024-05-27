/* Sum of digits of a number
 * Author: Yug Desai
 * DOC: 24 May 2024 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define ll long long

int main(){
	int n;
	int ans=0;

	printf("\nEnter any number: ");
	scanf("%d",&n);
	
	while(n){
		ans += (n%10);
		n /= 10;
	}

	printf("Sum of digits: %d\n\n",ans);
	
	return EXIT_SUCCESS;
}
