#include <stdio.h>

int swap(int a, int b, int c)
{
	int temp;
	if(a > b)
	{
		temp = b;
		b = a;
		a = temp;
	}
	if(b > c)
	{
		temp = c;
		c = b;
		b = temp;
	}
	if(a > b)
	{
		temp = b;
		b = a;
		a = temp;
	}
	printf("%d %d %d\n", a, b, c);
}

int main()
{	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	swap(a, b, c);
}
