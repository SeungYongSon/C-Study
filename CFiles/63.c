#include <stdio.h>

int main()
{
	int a = 3, b = 2;
	
	int  y = 5, z = 3;
	
	y -= z +1; 
	
	// y = y- z
	
	printf("%d %d \n", ++a, b--);
	
	a += 1, b -= 1;
	
	printf("%d %d \n", a, b);

	printf("%d \n", y);
}
