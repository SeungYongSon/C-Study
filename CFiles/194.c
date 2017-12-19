#include <stdio.h>

int a,b,c;

int swap()
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
}

int main()
{	
	scanf("%d %d %d", &a, &b, &c);
	swap();
	printf("%d %d %d\n", a, b, c);
}
