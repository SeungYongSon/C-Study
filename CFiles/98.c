#include <stdio.h>

int main()
{
	int t1, t2, t3;
	scanf("%d %d %d", &t1, &t2, &t3);
	
	if(170 >= t1)
		printf("충돌 %d\n", t1);
	else if(170 >= t2)
		printf("충돌 %d\n", t2);
	else if(170 >= t3)
		printf("충돌 %d\n", t3);
	else
		printf("무사 통과\n");
	
}
