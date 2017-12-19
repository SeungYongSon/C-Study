#include <stdio.h>

int main()
{
	int Num[4], N1, i;
	
	printf("값 입력 : ");
	scanf("%d %d %d %d", &Num[0], &Num[1], &Num[2], &Num[3]);
	
	for(i = 0; i< 4; i++)
	{
		if(Num[i])
			N1++;
	}
	switch(N1)
	{
		case 1:printf("도\n");break;
		case 2:printf("개\n");break;
		case 3:printf("걸\n");break;
		case 4:printf("윳\n");break;
		default:printf("모\n");
	}
}
