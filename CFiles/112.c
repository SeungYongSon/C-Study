#include <stdio.h>

int main()
{
	int a, b;
	
	printf("���� �Է�: ");
	scanf("%d %d", &a, &b);
	
	if(a >= b)
	{
		for(b; b <= a; b++)
			printf("%d ", b);
	}	
	else if(a <= b)
	{
		for(a; a <= b; a++)
			printf("%d ", a);		
	}
	printf("\n");
}
