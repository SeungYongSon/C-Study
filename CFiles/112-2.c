#include <stdio.h>

int main()
{
	int a, b, temp, i;
	
	printf("숫자 입력: ");
	scanf("%d %d", &a, &b);
	
	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}	
	for(i=a; i<=b; i++)
		printf("%d ", i);
	printf("\n");
}
