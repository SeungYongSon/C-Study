#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char str[20];
	
	fp = fopen("f.txt", "a+");
	if(fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}
	
	while(1)
	{
		printf("파일 이름 : ");
		scanf("%s", str);
		if(strcmp(str, "end") == 0)
		{
			break;
		}
		else if(strcmp(str, "list") == 0)
		{
			fseek(fp, 0, SEEK_SET); // 버퍼의 위치를 맨 처음으로 이동(offset 값 양수만 가능) 
			while(1)
			{
				fgets(str, sizeof(str), fp);
				if(feof(fp)) //파일을 다 읽으면 
				{
					break;
				}
				printf("%s", str);
			}
		}
		else
		{
			fprintf(fp, "%s\n", str);
		}
	}
	fclose(fp);
}
