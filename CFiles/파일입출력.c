#include <stdio.h>

int main()
{
	FILE *fp = fopen("welcome_to_the_black_parade.txt", "r");
	char str[200], *res;
	if(fp == '\0'){
		printf("����\n"); 
		return 1;
	}
	else{
		printf("����!\n");
		while(1)
		{
			res = fgets(str, sizeof(str), fp);
			if(res == NULL)
				break;
			fputs(res, stdout);
		}
	}
	fclose(fp);
}
