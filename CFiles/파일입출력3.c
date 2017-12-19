#include <stdio.h>

int main()
{
	FILE *fp = fopen("welcome_to_the_black_parade.txt", "r");
	char str;
	if(fp == '\0'){
		printf("실패\n"); 
		return 1;
	}
	else{
		printf("성공!\n");
		while(1)
		{
			str = fgetc(fp);
			if(str == EOF)
			{
				break;
			}
			putchar(str);
		}
	}
	fclose(fp);
}
