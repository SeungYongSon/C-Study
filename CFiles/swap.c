#include <stdio.h>

int swap_value(int, int); 

int main()
{
	int x = 50, y = 20;
	printf("�Լ� ȣ���� x = %d, y = %d\n", x, y);
	swap_value(x,y);
	printf("�Լ� ȣ���� x = %d, y = %d\n", x, y);	
}

int swap_value(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("�Լ� ������ a = %d, b = %d\n", a, b);	
}
