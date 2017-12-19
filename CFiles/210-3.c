#include <stdio.h>

int main()
{
	int n1, i, m1 = 0 , m2 = 0;
	
	for(i = 0; i< 10; i++)
	{
		scanf("%d", &n1);
		if(n1 % 2 == 0)
		{
			if(m1 < n1)
				m1 = n1;	
		}
		else
		{
			if(m2 < n1)
				m2 = n1;
		}
	}

	if(m1 > 0)
		printf("%d ", m1);
	if(m2 > 0)
		printf("%d ", m2);
	printf("\n");
}
