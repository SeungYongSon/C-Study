#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
	int id;
	char name[20];
	double grade;
};

int main()
{
	struct student s1 = { 315, "ȫ�浿", 2.4}, s2 = { 316, "�̼���", 3.7};
	
	struct student max;
	max = s1;
	if(s2.grade > max.grade) max = s2;
	printf("�̸� : %s\n", max.name);
	printf("���� : %1lf\n", max.grade); 
}
