#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int k)
{
	int i, res=1;
	for(i = 1; i <= k; i++) {
		res*= i;
	}
	
	return res;
}

int combination(int n, int r)
{
	int num1, num2; //num1 - 분자, num2 - 분모
	
	num1 = factorial(n);
	num2 = factorial(n-r)*factorial(r);
	
	return (num1/num2);
}

int main(void)
{
	int n, r;
	printf("정수 n을 입력하시오. : ");
	scanf("%d", &n); 
	printf("정수 r을 입력하시오. : ");
	scanf("%d", &r); 
	
	printf("C(n, r) : %d\n", combination(n, r));
	
	return 0;
} 
/*
int combiation(int n, int r)
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
	
	return nu/deno; //3. 최종값 출력 
	
}

int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r); //1. 입력값 받음 
	printf("C(n,r) = %d\n", combimation(n, r)); //2. 분자/분모 계산 
	
	return 0;
}*/
