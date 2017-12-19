#include <stdio.h>

struct student{
	int id;
	char name[20];
	double grade;
} s1 = {315, "홍길동", 2.4};

int main()
{
	struct student *ps = &s1;
	printf("반 : %d\n", (*ps).id);
	printf("이름 : %s\n", ps -> name);	
} 
