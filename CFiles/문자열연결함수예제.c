#include <stdio.h>
#include <string.h>

int main()
{
	//char *strcat(char *dest, char *src);  // dest + src
	//char *strncat(char *dest, char *src, size_t count); // count 만큼 연결
	
	char dest[15] = "I am";
	char src[] = " a student";
	printf("dest : %s \n", dest);
	printf("src : %s \n", src);
	
	printf("\n\n");
	
	strcat(dest, src);
	strncat(dest, src, 6); 
	
	printf("dest : %s \n", dest);
	printf("src : %s \n", src);
}
