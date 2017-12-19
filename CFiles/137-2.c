#include <stdio.h>

int f(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a,b,c;
	scanf("%d %d", &a, &b);
	f(&a, &b);
	printf("%d %d\n", a,b);
}
