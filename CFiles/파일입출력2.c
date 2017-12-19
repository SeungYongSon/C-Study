#include <stdio.h>

int main()
{
	FILE *fp = fopen("nanana.txt", "r");
	char str;
	if(fp == '\0'){
		printf("실패\n"); 
		return 1;
	}
	else{
		printf("성공!\n");
		while(str != EOF)
		{
			str = fgetc(fp);
			printf("%c", str);
		}
	}
	fclose(fp);
}
