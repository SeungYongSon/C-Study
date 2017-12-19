#include <stdio.h>

int main()
{
	char string[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char string2[6] = "world";
	printf("%s\n", string);
	printf("%s\n", string2);
	printf("%s %s \n", string, string2);
}
