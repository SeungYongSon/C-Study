#include <stdio.h>
#include <string.h>

/*
char *strchr(const cahr *string, int c);
	char str[] = "applepie";
	char *ptr, *rptr;
	ptr = strchr(str, 'e');

char *strrchr(const char *string, int c);
	rptr = strrchr(str, 'e');

char *strstr(const char *string, const char *strSearch);
	strstr(str, strSearch);

size_t strcspn(const char *s, const char *strCharset); 
	strcspn(str, "a"); 
특정 문자 및 널 문자가 있는지 검색 (문자의 위치 반환) 

size_t strspn(const char *s, const char *strCharset); 
	strspn(str, "a"); 
특정 문자가 포함되지 않는지 (특정 문자가 없으면 첫 번째 위치를 반환)
 
*/

int main()
{
	char buff[100] = "[(This)] [(is)] [(a)] [(good)] [(book)].";
	char* seps = "[]() .";
	char* token;
	
	token = strtok(buff, seps);
	
	while(token)
	{
		puts(token);
		token = strtok(NULL, seps);
	}
}
