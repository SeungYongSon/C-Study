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
	struct student s1 = { 315, "홍길동", 2.4}, s2 = { 316, "이순신", 3.7};
	
	struct student max;
	max = s1;
	if(s2.grade > max.grade) max = s2;
	printf("이름 : %s\n", max.name);
	printf("학점 : %1lf\n", max.grade); 
}
