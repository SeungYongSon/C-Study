#include <stdio.h>

typedef struct{
	int num;
	char name[10];
}Student;

int main()
{
	Student a = {315, "ȫ�浿"};
	
	printf("�й� : %d, �̸� : %s\n", a.num, a.name);
	
	return 0; 
}
