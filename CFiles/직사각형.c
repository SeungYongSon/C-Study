#include <stdio.h>

int main()
{
	int i, j;
	
	while(1)
	{
		Sleep(1000);
		system("cls");
		for(i = 0; i< 15; i++)
		{
			for(j = 0; j< 10; j++)
			{
				if(i == 0 || i== 14)
					printf("��");
				else
				{
					if(j == 0 || j== 9)
						printf("��");
					else
						printf("  ");	
				}
			}
			printf("\n");
		}
		Sleep(1000);
		system("cls");
		for(i = 0; i< 15; i++)
		{
			for(j = 0; j< 10; j++)
			{
				if(i == 0 || i== 14)
					printf("��");
				else
				{
					if(j == 0 || j== 9)
						printf("��"); 
					else
						printf("  ");	
				}
			}
			printf("\n");
		}
	}
}
