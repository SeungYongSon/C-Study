#include <stdio.h>

int main()
{
	int h,m;
	
	printf("시 분 :");
	scanf("%d %d", &h, &m);
	
	if(m > 59)
		printf("잘못된 값 !");
	else if(h > 24)
		printf("잘못된 값 !");
	else
	{
		if(m < 30)
			printf("%d %d", h-1, m+30);
		else
			printf("%d %d", h, m-30);	
	}
}
