#include <stdio.h>

struct student{
	int id;
	char name[20];
	double grade;
};

//�Ű������� ����ü ������ 
void print_list(struct student *lp){//lp[i].name == (*(lp+i)).name  == (lp+i) -> name 
	int i;
	for(i = 0; i<3; i++)
		printf("%4d %10s %.1lf\n", lp[i].id, (*(lp+i)).name, (lp+i)->grade);
}

int main()
{
	struct student list[3] ={
		{315, "ȫ�浿", 2.4},
		{316, "�̼���", 2.3},
		{317, "������", 2.1}
	};
	print_list(list); 
}
