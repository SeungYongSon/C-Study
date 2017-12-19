#include <stdio.h>

int main()
{
	char buff[100];
	sprintf(buff, "iÀÇ °ªÀº %d \n", 5);
	printf("%s", buff);
}

