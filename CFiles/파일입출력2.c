#include <stdio.h>

int main()
{
	FILE *fp = fopen("nanana.txt", "r");
	char str;
	if(fp == '\0'){
		printf("����\n"); 
		return 1;
	}
	else{
		printf("����!\n");
		while(str != EOF)
		{
			str = fgetc(fp);
			printf("%c", str);
		}
	}
	fclose(fp);
}
