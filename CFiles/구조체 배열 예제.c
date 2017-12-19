#include <stdio.h>

struct student{
	int id;
	char name[20];
	double grade;
};

//매개변수는 구조체 포인터 
void print_list(struct student *lp){//lp[i].name == (*(lp+i)).name  == (lp+i) -> name 
	int i;
	for(i = 0; i<3; i++)
		printf("%4d %10s %.1lf\n", lp[i].id, (*(lp+i)).name, (lp+i)->grade);
}

int main()
{
	struct student list[3] ={
		{315, "홍길동", 2.4},
		{316, "이순신", 2.3},
		{317, "강감찬", 2.1}
	};
	print_list(list); 
}
