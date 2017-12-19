#include <stdio.h>

int Tn(int a, int b, int c)
{
	if(a < b)
	{
		if(a < c)
			return a;
		else
			return c;
	}
	else
	{
		if(b < c)
			return b;
		else
			return c;
	}
}

int main()
{
	int A,B,C,i,temp;
	
	printf("ÀÔ·Â : ");
	scanf("%d %d %d", &A, &B, &C);
	
	for(i = 1; i <= Tn(A,B,C); i++)
	{
		if(C % i == 0 && B % i == 0 && C % i == 0)
			temp = i;
	}
	printf("%d\n", temp);
}
