#include <stdio.h>

int main()
{
	int money, remain, book = 15000;
	
	printf("책의 가격은 %d원입니다. \n", book);
	printf("당신이 가진 용돈은 얼마인가요?: ");
	scanf("%d", &money);
	if(money >= book)
	{
		remain = money - book;
		printf("책을 구입하였습니다. 이제 남은 용돈은 %d원 입니다. \n", remain);
	}
} 
