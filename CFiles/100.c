#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	/*
	if(a==1)printf("1st\n");
	else if(a==2)printf("2nd\n");
	else if(a==3)printf("3rd\n");
	*/
	
	switch(a)
	{
		case 1 : printf("1st\n"); break;
		case 2 : printf("2nd\n"); break;
		case 3 : printf("3rd\n"); break;
		default : printf("0st\n"); break;
	}
}
