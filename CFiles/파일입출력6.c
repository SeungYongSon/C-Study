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
	
	while(str[i] != '\0')
		fputc(str[i++], fp);
	
	fclose(fp);

	return 0;
}
