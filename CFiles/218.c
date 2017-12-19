#include <stdio.h>

int main()
{
	int A,B,C,i,temp;
	
	printf("값을 오름차순으로 입력 : ");
	scanf("%d %d %d", &A, &B, &C);
	
	for(i = 1; i <= A; i++)
	{
		if(C % i == 0 && B % i == 0 && C % i == 0)
			temp = i;
	}
	printf("%d\n", temp);
}
