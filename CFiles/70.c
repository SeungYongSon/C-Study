#include <stdio.h>

int main()
{
	
	int z = 5;
	int y = 1;
	
	y = -(z+1);
	
	printf("%d ", y);
	
	
	y = 1;
	y -= z+1;
	printf("%d ", y);
	
	int a = 365;
	float b= 3.14;
	
	printf("%5d \t", a);
	printf("%3.1f\n",b);
	
	printf("%%d");
}
