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
	int num1, num2; //num1 - ����, num2 - �и�
	
	num1 = factorial(n);
	num2 = factorial(n-r)*factorial(r);
	
	return (num1/num2);
}

int main(void)
{
	int n, r;
	printf("���� n�� �Է��Ͻÿ�. : ");
	scanf("%d", &n); 
	printf("���� r�� �Է��Ͻÿ�. : ");
	scanf("%d", &r); 
	
	printf("C(n, r) : %d\n", combination(n, r));
	
	return 0;
} 
/*
int combiation(int n, int r)
{
	int i;
	int deno=1, nu=1; // denominator �и� numerator ���� 
	
	for(i = 1; i <= n; i++) {
		 nu*= i;
	}
	
	for(i = 1; i <= n-r ; i++) {
		deno*= i;
	}
	
	for(i = 1; i <= r; i++) {
		deno*= i;
	}
	
	return nu/deno; //3. ������ ��� 
	
}

int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r); //1. �Է°� ���� 
	printf("C(n,r) = %d\n", combimation(n, r)); //2. ����/�и� ��� 
	
	return 0;
}*/
