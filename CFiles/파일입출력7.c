#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	int i = 0;
	fp = fopen("heheheehehe.txt", "w");
	
	if(fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}
	char str[100];
	scanf("%s", str);
	
	while(str[i] != NULL)
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}
