#include <stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("값 입력 : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	switch(a+b+c+d)
	{
		case 1:printf("도\n");break;
		case 2:printf("개\n");break;
		case 3:printf("걸\n");break;
		case 4:printf("윳\n");break;
		default:printf("모\n");
	}
}
