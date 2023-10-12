#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combimation(int n, int r)
{
	int i;
	int deno=1, nu=1; // denominator 분모 numerator 분자 
	
	for(i = 1; i <= n; i++) {
		 nu*= i;
	}
	
	for(i = 1; i <= n-r ; i++) {
		deno*= i;
	}
	
	for(i = 1; i <= r; i++) {
		deno*= i;
	}
	
	return nu/deno; 
	
}

int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r);
	printf("C(n,r) = %d\n", combimation(n, r));
	
	return 0;
}
