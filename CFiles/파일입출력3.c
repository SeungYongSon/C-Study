#include <stdio.h>

int main()
{
	FILE *fp = fopen("welcome_to_the_black_parade.txt", "r");
	char str;
	if(fp == '\0'){
		printf("����\n"); 
		return 1;
	}
	else{
		printf("����!\n");
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
