#include <stdio.h>

int main()
{
	int a = 30;
	float b = 3.14;
	char c = 'A';
	char d[6] = {'K', 'O', 'R', 'E', 'A', '\0'}; //'\0'(NULL = 문자열의 끝, ASCII 코드로 0으로 지정되어있음.)
	
	printf("%d %f %c %s \n", a, b, c, d);
}
