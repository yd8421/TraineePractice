/* Binary to Decimal --- using while loop
 * Author: Yug
 * DOC: 24 May 2024 */

#include<stdio.h>

int main()
{
	int bin;
	printf("\nEnter the Binary No.: ");
	scanf("%d", &bin);

	int ans = 0;
	int mult = 1;
	while(bin){
		ans += mult*(bin%10);
		bin /= 10;
		mult *= 2;
	}

	printf("Decimal form: %d\n\n", ans);
}
