#include <stdio.h>
#include <string.h>

int main()
{
	//char gets(char *s);
	//char fgets(char *s, int  , FILE *filepointer);
	char str[10];
	gets(str); // str이 할당하는 크기를 넘어서 입력하면 오버플로우 됨. 
	fgets(str, sizeof(str), stdin);
}
