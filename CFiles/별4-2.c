#include <stdio.h>

int main()
{
	int i, j, k;
	for(i = 0; i< 5; i++)
	{
		for(k= 4-i; k>=0; k--)
			printf(" ");
		for(j=0; j<=i; j++)
			printf("¡Ú");
		printf("\n");
	}
	for(i = 3; i >= 0; i--)
	{
		for(k= 4-i; k>=0; k--)
			printf(" ");
		for(j=0; j<=i; j++)
			printf("¡Ú");
		printf("\n");
	}
}
