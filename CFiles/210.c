#include <stdio.h>

int main()
{
	int num[10], m1 = 0 , m2 = 0, i;
	
	for(i = 0; i< 10; i++)
	{
		scanf("%d", &num[i]);
		if(num[i] % 2 == 0)
		{
			if(m1 < num[i])
				m1 = num[i];
		}
		else
		{
			if(m2 < num[i])
				m2 = num[i];
		}
	}
	if(m1 > 0)
		printf("%d ", m1);
	if(m2 > 0)
		printf("%d ", m2);
	printf("\n");
}
