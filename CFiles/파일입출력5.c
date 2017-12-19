#include <stdio.h>

int main()
{
	FILE *fp, *fp2;
	char ch;
	
	fp = fopen("welcome_to_the_black_parade.txt", "r");
	fp2 = fopen("yayyay.txt", "w");
	
	if(fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
		{
			break;
		}
		fputc(ch, fp2);
	}
	fclose(fp);
	fclose(fp2);
	
	return 0;
}
