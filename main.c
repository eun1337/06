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
    
    printf("���� �ΰ��� �Է��Ͻÿ�. : ");
	scanf("%d %d", &i, &j);
    int my_sum=sumTwo(i, j);
    printf("�� ������ �� : %d\n", my_sum);

    printf("���� �Ѱ��� �Է��Ͻÿ�. : ");
	scanf("%d", &i);
    int my_square=square(i);
    printf("������ ���� : %d\n", my_square);
    
    printf("���� �ΰ��� �Է��Ͻÿ�. : ");
	scanf("%d %d", &i, &j);
    int my_max=get_max(i, j);
    printf("ū �� : %d\n", my_max);
    
    return 0;
}
