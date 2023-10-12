#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
    return a+b;
}

int square(int n)
{
    return n*n;
}

int get_max(int x, int y)
{
    if (x > y) return x;
    else return y;
}

int main()
{
    int i, j;
    
    printf("정수 두개를 입력하시오. : ");
	scanf("%d %d", &i, &j);
    int my_sum=sumTwo(i, j);
    printf("두 정수의 합 : %d\n", my_sum);

    printf("정수 한개를 입력하시오. : ");
	scanf("%d", &i);
    int my_square=square(i);
    printf("정수의 제곱 : %d\n", my_square);
    
    printf("정수 두개를 입력하시오. : ");
	scanf("%d %d", &i, &j);
    int my_max=get_max(i, j);
    printf("큰 값 : %d\n", my_max);
    
    return 0;
}
