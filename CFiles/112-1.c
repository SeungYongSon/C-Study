#include <stdio.h>

int main()
{
	int a, b, c, d;
	
	printf("���� �Է�: ");
	scanf("%d %d", &a, &b);
	
	c = (b> a) ? a : b;
	d = (b< a) ? a : b;
	 
	for(c; c <= d; c++)
		printf("%d ", c);
	printf("\n");
}
