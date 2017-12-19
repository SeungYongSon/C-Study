#include <stdio.h>

#define DOUBLE(x) x+x

int main()
{
	int iVAL;
	double fVAL;
	
	fputs("정수를 입력하세요: ", stdout);
	scanf("%d", &iVAL);
	printf("결과는 %d 입니다.\n", DOUBLE(iVAL));
	
	fputs("실수를 입력하세요: ", stdout);
	scanf("%lf", &fVAL);
	printf("결과는 %lf 입니다.\n", DOUBLE(fVAL));
	printf("새결과는 %lf 입니다.\n", -DOUBLE(fVAL));	
}
