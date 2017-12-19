#include <stdio.h>

int main()
{
	char N;
	while(N != '\n')
	{
		scanf("%c", &N);
		if(N > 99)
			N -= 3;
		else
			if(97 <= N)
				N += 23;
		printf("%c", N);
	}

}
