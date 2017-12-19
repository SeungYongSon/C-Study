#include <stdio.h>

int main()
{
	int i, j;
	char PassWord[21];
	printf("암호 입력 : ");
	scanf("%s", PassWord);

	for(i = 0; i< 2; i++)
	{
		printf("결과 %d :", i+1);
		for(j = 0; j< PassWord[j] != '\0'; j++)
		{
			if(i > 0)
				printf("%c", (PassWord[j]*7) % 80 + 48);
			else
				printf("%c", PassWord[j]+2);
		}
		printf("\n");
	}
}
