#include <stdio.h>

int main()
{
	int i, j, count;
	
	scanf("%d", &count);
	
	system("cls");
	while(1)
	{
		for(i = 0; i < count; i++)
		{
			for(j= 0; j < count;  j++)
			{
				if(i < j)
					printf("¡Ù");
				else
					printf("¡Ú");
			}
			printf("\n");
		}
		for(i = 0; i < count-1; i++)
		{
			for(j= count-1; j >= 0;  j--)
			{
				if(i >= j)
					printf("¡Ù");
				else
					printf("¡Ú");
			}
			printf("\n"); 
		}
		Sleep(1000);
		system("cls");
		for(i = 0; i < count; i++)
		{
			for(j= 0; j < count;  j++)
			{
				if(i < j)
					printf("¡Ú");
				else
					printf("¡Ù");
			}
			printf("\n");
		}
		for(i = 0; i < count-1; i++)
		{
			for(j= count-1; j >= 0;  j--)
			{
				if(i >= j)
					printf("¡Ú");
				else
					printf("¡Ù");
			}
			printf("\n"); 
		}
		Sleep(1000);
		system("cls");
		
	}
}
