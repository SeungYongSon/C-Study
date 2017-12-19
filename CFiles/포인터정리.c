#include <stdio.h>

int main()
{
	char ch;
	int tmp;
	double db;
	*&ch = 'P';
	*&tmp = 100;
	*&db = 3.14;
	
	printf("변수 ch에 저장된 문자 : %c\n", ch);
	printf("변수 tmp에 저장된 문자 : %d\n", tmp);
	printf("변수 db에 저장된 문자 : %lf\n", db);
	tmp = 300;
	printf("변수 tmp에 저장된 문자 : %d\n", *&tmp);
	
	int a = 100, b = 0;
	b = *&a;
	
	a = 10, b = 20;
	*&a = *&b;
	
	int *p;
	int i;
	int arr[3] = {100, 78, 36};
	
	a = 30;
	p = &a;
	printf("%d\n", *p);
	
	p = arr;
	for(i = 0; i<3; i++)
		printf("%d\n", *(p+i));
		
	char arr2[3] = {'a', 'b'};
	char *c = &arr2;
	char str1[] = "my string!";
	char *str2 = "your string!";
}
