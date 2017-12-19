#include <stdio.h>
#include <string.h>

int main()
{
	//int puts(char *s);
	//int fputs(char *s, FILE *filepointer);	
	char str[] = "Have a nice day";
	puts(str);
	fputs(str, stdout);
}
