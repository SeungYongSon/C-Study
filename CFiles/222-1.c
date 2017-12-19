#include <stdio.h>

int main()
{

	int N, dna = 0, temp = 0;
	
	printf("용의자의 DNA 정보를 10자리 입력 :");
	scanf("%d", &N);
	while(N != 0)
	{
		dna += N%10;
		N /= 10;
	}
	printf("%d %s\n", dna,(dna % 7 == 4) ? "범인" : "일반인");

}
