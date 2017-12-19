#include <stdio.h>

int main()
{
	char N[100];
	int i;
	scanf("%[^\n]s", &N);
	for(i = 0; N[i] != '\0'; i++)
	{
		if(N[i] > 99)
			N[i] -= 3;
		else
			if(97 <= N[i])
				N[i] += 23;
	}
	printf("%s\n", N);
}
