#include <stdio.h>

int Tn(int a, int b)
{
	if(a < b)
		return a;
	else
		return b;
}

int main()
{
	int A,B,C,i,temp;

	printf("ÀÔ·Â : ");
	scanf("%d %d %d", &A, &B, &C);
	
	
	for(i = 1; i <= Tn(Tn(A,B), C); i++)
	{
		if(C % i == 0 && B % i == 0 && C % i == 0)
			temp = i;
	}
	printf("%d\n", temp);
}
