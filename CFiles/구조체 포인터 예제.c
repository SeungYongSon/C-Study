#include <stdio.h>

struct student{
	int id;
	char name[20];
	double grade;
} s1 = {315, "ȫ�浿", 2.4};

int main()
{
	struct student *ps = &s1;
	printf("�� : %d\n", (*ps).id);
	printf("�̸� : %s\n", ps -> name);	
} 
