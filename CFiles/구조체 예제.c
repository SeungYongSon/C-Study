#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#pragma pack(1);
struct profile{

	char name[20];
	int age;
	char *intro;
};

int main()
{
	struct profile me;
	printf("�̸� ? ");
	scanf("%s", me.name); 
	printf("���� ? ");
	scanf("%d", &me.age);
	//strcpy(me.name, "ȫ�浿");
	//me.age = 17;
	me.intro = (char *)malloc(80); //�����Ҵ� 
	printf("�ڱ⸦ �Ұ��ϼ���\n");
	getchar(); //�̰� ���� scanf ���� ���� ������ ����. 
	gets(me.intro);
	printf("�̸�: %s ����: %d �Ұ� : %s \n", me.name, me.age, me.intro);
	free(me.intro);	
}
