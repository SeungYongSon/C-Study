#include <stdio.h>

int main()
{
	int n, sum = 0;
	
	scanf("%d", &n);
	while(n != 0)
	{
		sum += n%10;
		printf("%d %d\n", sum, n%10);
		n /= 10;
	}
	printf("%d %s\n", sum,(sum % 7 == 4) ? "범인" : "일반인");

}
