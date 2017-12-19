#include <stdio.h>
#include <string.h>

int main()
{
	//char *strcpy(char *dest, char *src);
	//char *strncpy(char *dest, char *src, size_t count);
	
	char str1[11] = "SmartPhone";
	char str2[11] = "InterPhone";
	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);
	
	printf("\n\n");
	
	strncpy(str2, str1, 5);
	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);
	
	printf("\n\n");
	strcpy(str2, "clean");
	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);
	
	printf("\n\n");
	strcpy(str2, "I have a dream");
	
	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);
}
