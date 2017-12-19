#include <stdio.h>

int swap_reference(int *, int*); 

int main()
{
	int x = 50, y = 20;
	printf("함수 호출전 x = %d, y = %d\n", x, y);
	swap_reference(&x,&y);
	printf("함수 호출후 x = %d, y = %d\n", x, y);	
}

int swap_reference(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("함수 내에서 a = %d, b = %d\n", *a, *b);	
}
