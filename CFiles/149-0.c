#include <stdio.h>

int f()
{
	int a,b,c,d;
	printf("�� �Է� : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	return a+b+c+d;
} 

int main()
{		
	switch(f())
	{
		case 1:printf("��\n");break;
		case 2:printf("��\n");break;
		case 3:printf("��\n");break;
		case 4:printf("��\n");break;
		case 0:printf("��\n");break;
		default:printf("�ս¿� �����!\n");
	}
}
