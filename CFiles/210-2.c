#include <stdio.h>

int m1 = 0 , m2 = 0;

int asdf(int num)
{
	if(num % 2 == 0)
	{
		if(m1 < num)
			m1 = num;	
	}
	else
	{
		if(m2 < num)
			m2 = num;	
	}
}

int main()
{
	int n1, i;
	
	for(i = 0; i< 10; i++)
	{
		scanf("%d", &n1);
		asdf(n1);
	}

	if(m1 > 0)
		printf("%d ", m1);
	if(m2 > 0)
		printf("%d ", m2);
	printf("\n");
}
