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
Ư�� ���� �� �� ���ڰ� �ִ��� �˻� (������ ��ġ ��ȯ) 

size_t strspn(const char *s, const char *strCharset); 
	strspn(str, "a"); 
Ư�� ���ڰ� ���Ե��� �ʴ��� (Ư�� ���ڰ� ������ ù ��° ��ġ�� ��ȯ)
 
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
