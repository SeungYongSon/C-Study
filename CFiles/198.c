#include <stdio.h>

int main()
{
	int h,m;
	
	printf("�� �� :");
	scanf("%d %d", &h, &m);
	
	if(m > 59)
		printf("�߸��� �� !");
	else if(h > 24)
		printf("�߸��� �� !");
	else
	{
		if(m < 30)
			printf("%d %d", h-1, m+30);
		else
			printf("%d %d", h, m-30);	
	}
}
