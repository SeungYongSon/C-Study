#include <stdio.h>

int f()
{
	int a,b,c,d;
	printf("값 입력 : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	return a+b+c+d;
} 

int main()
{		
	switch(f())
	{
		case 1:printf("도\n");break;
		case 2:printf("개\n");break;
		case 3:printf("걸\n");break;
		case 4:printf("윳\n");break;
		case 0:printf("모\n");break;
		default:printf("손승용 기모찌!\n");
	}
}
