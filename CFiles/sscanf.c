#include <stdio.h>

int main()
{
	char s1[10], s2[10];
	char* token = "111 222";
	sscanf(token, "%s %s", s1, s2);
	
	printf("s1 : %s \ns2 : %s", s1, s2);
}
