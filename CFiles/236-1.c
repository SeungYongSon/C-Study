#include <stdio.h>

int reverse(int n)
{
	int s;

	while(n)
	{
		s = s * 10;
		s = s + (n%10);
		n = n / 10;
	}
	return s;

}

int main()
{
	int N, B;
	
	scanf("%d", &N);
	B = N + reverse(N);
	
	//printf("%d", B);
	if(B == reverse(B))
		printf("YES\n");
	else
		printf("NO\n");
}
