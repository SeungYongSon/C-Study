#include <stdio.h>

int main()
{
	int i,j;
	for(i = 1; i <= 9; i++)
	{
		for(j=1; j<=9; j++)
			printf("%d*%d = %3.d  ", i, j, i*j);
		printf("\n");
	}
	printf("수고했습니다.\n"); 
}
