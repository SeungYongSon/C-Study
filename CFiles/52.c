#include <stdio.h>

int main()
{
	int max = 2147483647;
	printf("%d\n", max);
	
	max = max + 1; //오버플로우 발생 
	printf("%d\n", max);
}
