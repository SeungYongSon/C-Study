#include <stdio.h>

int main()
{
	char ch;
	printf("���� �ҹ��� �Է��ϼ��� :");	
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a' : printf("����\n");
		case 'e' : printf("����\n");	
		case 'i' : printf("����\n");	
		case 'o' : printf("����\n");	
		case 'u' : printf("����\n");break;	
		default : printf("����\n");
	}
}
