#include <stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 5; i++)
	{
		for(j=1; j <= 5; j++)
		{
			if(j >= 6-i)
				printf("¡Ú");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	printf("\n");
	for(i = 1; i <= 5; i++)
	{
		for(j=1; j<=5-i; j++)
			printf(" ");
		for(j=1; j<=i; j++)
			printf("¡Ú"); 
		printf("\n");
	}	
	
	printf("\n");
	
	int k; 
	for(i = 1; i<=5; i++)
	{
		for(k=5; k>=i; k--)
			printf(" ");
		for(j=1; j<=i; j++)
			printf("¡Ú"); 
		printf("\n");
	}
	
	for(i = 1; i<=6; i++)
		printf("¡Ú");
	printf("\n"); 

	for(i = 5; i >= 1; i--)
	{
		for(k=5; k>=i; k--)
			printf(" ");
		for(j=1; j<=i; j++)
			printf("¡Ú"); 
		printf("\n");
	}
	
	//µÚÁýÈù°Å 
	/*
	for(i = 5; i > 0; i--)
	{
		for(j=1; j <= 5; j++)
		{
			if(j >= 6-i)
				printf("¡Ú");
			else
				printf(" ");
		}
		printf("\n");
	}
	*/
}
