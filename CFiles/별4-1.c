#include <stdio.h>

int main()
{
	int i, j, k;
	int count;
	
	scanf("%d", &count);
	system("cls");
	while(1)
	{
		for(i = 1; i<=count; i++)
		{
			for(k=count-1; k>=i; k--)
				printf(" ");
			for(j=1; j<=i; j++)
				printf("¡Ú"); 
			printf("\n");
		}
		for(i = count-1; i >= 1; i--)
		{
			for(k=count-1; k>=i; k--)
				printf(" ");
			for(j=1; j<=i; j++)
				printf("¡Ú"); 
			printf("\n");
		}
		Sleep(1000);
		system("cls");
		for(i = 1; i<=count; i++)
		{
			for(k=count-1; k>=i; k--)
				printf(" ");
			for(j=1; j<=i; j++)
				printf("¡Ù"); 
			printf("\n");
		}
		for(i = count-1; i >= 1; i--)
		{
			for(k=count-1; k>=i; k--)
				printf(" ");
			for(j=1; j<=i; j++)
				printf("¡Ù");  
			printf("\n");
		}
		Sleep(1000);
		system("cls");
	}
}
