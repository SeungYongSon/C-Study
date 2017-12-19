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
	int A,B,C,i;

	printf("ют╥б : ");
	scanf("%d %d %d", &A, &B, &C);
	
	
	for(i = Tn(Tn(A,B), C); i >= 0; i--)
		if(C % i == 0 && B % i == 0 && C % i == 0)
			break;
	printf("%d\n", i);
}
