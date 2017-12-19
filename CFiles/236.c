#include <stdio.h>

int reverse(int N)
{
	int temp = 0, i = 1, temp2 = N;
	for(i = 1; N != 0; )
	{
		i*= 10;
		N /= 10;
	}
	N = temp2;
	i /= 10;
	while(N != 0)
	{
		temp = temp + ((N % 10) * i);
		i /= 10;
		N /= 10;
	}
	return temp;

}

int main()
{
	int N, B;
	
	scanf("%d", &N);
	B = N + reverse(N);
	
	if(B == reverse(B))
		printf("YES\n");
	else
		printf("NO\n");
}
