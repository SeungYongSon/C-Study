#include <stdio.h>

int n[5][5];

int f(int a, int b)
{
	int i, j, sum = 0; 
	for(i = a; i<= a+3; i++)
		for(j = b; j <= b+3; j++)
			sum += n[i][j];
	return sum;
}

int main()
{
	int i,j , max = 0;
	
	for(i = 0; i< 5; i++)
		for(j = 0; j < 5; j++)
			scanf("%d", &n[i][j]);
	
	for(i = 0; i< 4; i++)
		for(j = 0; j < 4; j++)
			if(max < f(i,j))
				max = f(i, j);
	
	printf("%d", max);
}
