#include <stdio.h>

int main()
{
	int a;
	char n[10], b;
	double c;
		
	scanf("%s %d %c %lf", &n, &a, &b, &c);
	
	printf("********************\n");
	printf("이름: %s\n", n); 
	printf("나이: %d\n", a); 
	printf("부서코드: %c\n", b); 
	printf("보안키 : %.3lf\n", c); 
	printf("********************\n");
}
