#include <stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("�� �Է� : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	switch(a+b+c+d)
	{
		case 1:printf("��\n");break;
		case 2:printf("��\n");break;
		case 3:printf("��\n");break;
		case 4:printf("��\n");break;
		default:printf("��\n");
	}
}
