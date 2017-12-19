#include <stdio.h>

int main()
{
	int a, b, c, d;
	
	printf("숫자 입력: ");
	scanf("%d %d", &a, &b);
	
	c = (b> a) ? a : b;
	d = (b< a) ? a : b;
	 
	for(c; c <= d; c++)
		printf("%d ", c);
	printf("\n");
}
