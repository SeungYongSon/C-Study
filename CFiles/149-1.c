#include <stdio.h>

int main()
{
	int Num[4], N1, i;
	
	printf("�� �Է� : ");
	scanf("%d %d %d %d", &Num[0], &Num[1], &Num[2], &Num[3]);
	
	for(i = 0; i< 4; i++)
	{
		if(Num[i])
			N1++;
	}
	switch(N1)
	{
		case 1:printf("��\n");break;
		case 2:printf("��\n");break;
		case 3:printf("��\n");break;
		case 4:printf("��\n");break;
		default:printf("��\n");
	}
}
