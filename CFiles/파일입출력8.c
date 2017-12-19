#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *ifp, *ofp;
	char str[80];
	char *res;
	
	ifp = fopen("nanana.txt", "r");
	if(ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}
	
	ofp = fopen("b.txt", "w");
	if(ofp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}
	
	while(1)
	{
		res = fgets(str, sizeof(str), ifp);
		if(res == NULL)
			break;
		str[strlen(str) - 1] = '\0'; //개행문자 제거 
		fputs(res,ofp);
		fputs(" ", ofp);
	}
	fclose(ifp);
	fclose(ofp);
}
