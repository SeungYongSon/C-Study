#include <stdio.h>

int main()
{
	int a;
	char n[10], b;
	double c;
		
	scanf("%s %d %c %lf", &n, &a, &b, &c);
	
	printf("********************\n");
	printf("�̸�: %s\n", n); 
	printf("����: %d\n", a); 
	printf("�μ��ڵ�: %c\n", b); 
	printf("����Ű : %.3lf\n", c); 
	printf("********************\n");
}
