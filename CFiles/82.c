#include <stdio.h>

int main()
{
	int money, remain, book = 15000;
	
	printf("å�� ������ %d���Դϴ�. \n", book);
	printf("����� ���� �뵷�� ���ΰ���?: ");
	scanf("%d", &money);
	if(money >= book)
	{
		remain = money - book;
		printf("å�� �����Ͽ����ϴ�. ���� ���� �뵷�� %d�� �Դϴ�. \n", remain);
	}
} 
