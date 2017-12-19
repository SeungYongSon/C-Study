#include <stdio.h>
#include <string.h>

int main()
{
	//size_t strlen(char *str);
	char str[100] = "Have a nice day";
	int len = strlen(str);
	
	printf("len : %d\n", len);
}
