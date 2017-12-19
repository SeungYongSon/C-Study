#include <stdio.h>

int swap(int *a, int *b)
{
	int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
}

int main()
{	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b)
	{
		swap(&a, &b);
		if(b > c)
			swap(&b, &c);
		if(a > b)
			swap(&a, &b);
	}
	else
	{
		if(b > c)
			swap(&b , &c);
		if(a > b)
			swap(&a, &b);
	}
	printf("%d %d %d\n", a, b, c);
}
