#include <stdio.h>

int main()
{
	int a = 30;
	float b = 3.14;
	char c = 'A';
	char d[6] = {'K', 'O', 'R', 'E', 'A', '\0'}; //'\0'(NULL = ���ڿ��� ��, ASCII �ڵ�� 0���� �����Ǿ�����.)
	
	printf("%d %f %c %s \n", a, b, c, d);
}
