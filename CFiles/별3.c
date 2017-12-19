#include <stdio.h>

int main()
{
	int i, j;

		for(i = 0; i < 5; i++)
		{
			for(j= 0; j < 5;  j++)
			{
				if(i < j)
					printf("¡Ù");
				else
					printf("¡Ú");
			}
			printf("\n");
		}
		for(i = 0; i < 4; i++)
		{
			for(j= 4; j >= 0;  j--)
			{
				if(i >= j)
					printf("¡Ù");
				else
					printf("¡Ú");
			}
			printf("\n"); 
		}
}
