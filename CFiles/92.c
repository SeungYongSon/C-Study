#include <stdio.h>

int main()
{
	char ch;
	printf("���� �ҹ��� �Է��ϼ��� :");	
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a' : printf("����\n");break;
		case 'e' : printf("����\n");break;	
		case 'i' : printf("����\n");break;	
		case 'o' : printf("����\n");break;	
		case 'u' : printf("����\n");break;	
		default : printf("����\n");
	}	
}