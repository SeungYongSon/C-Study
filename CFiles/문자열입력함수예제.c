#include <stdio.h>
#include <string.h>

int main()
{
	//char gets(char *s);
	//char fgets(char *s, int  , FILE *filepointer);
	char str[10];
	gets(str); // str�� �Ҵ��ϴ� ũ�⸦ �Ѿ �Է��ϸ� �����÷ο� ��. 
	fgets(str, sizeof(str), stdin);
}
