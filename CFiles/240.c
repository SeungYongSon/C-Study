#include <stdio.h>

int St[100], N;
int first(int i)
{
	int j, dn = 1;
	for(j = 0; j < N; j++)
	{
		if(St[j] > St[i])
			dn++;
	}
	return dn;
}

int main()
{
	int i;
	printf("������ �� : ");
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
		scanf("%d", &St[i]);
		
	for(i = 0; i< N; i++)
		printf("%d�� : %d�� \n", i+1, first(i));
}
