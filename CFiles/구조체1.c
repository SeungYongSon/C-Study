#include <stdio.h>

typedef struct{
	int num;
	char name[10];
}Student;

int main()
{
	Student a = {315, "홍길동"};
	
	printf("학번 : %d, 이름 : %s\n", a.num, a.name);
	
	return 0; 
}
