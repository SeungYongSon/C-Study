#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "ABC";
	char s2[] = "ABB";
	char s3[] = "ABD";
	
	int ret1 = strcmp(s1, s2);//ABC ABB
	int ret2 = strcmp(s2, s3);//ABB ABD
	int ret3 = strncmp(s1, s2, 2); //AB AB
	
	printf("ret1 : %d \nret2 : %d \nret3 : %d \n", ret1, ret2, ret3);
}
