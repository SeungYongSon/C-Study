#include <stdio.h>

int swap_reference(int *, int*); 

int main()
{
	int x = 50, y = 20;
	printf("�Լ� ȣ���� x = %d, y = %d\n", x, y);
	swap_reference(&x,&y);
	printf("�Լ� ȣ���� x = %d, y = %d\n", x, y);	
}

int swap_reference(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("�Լ� ������ a = %d, b = %d\n", *a, *b);	
}
