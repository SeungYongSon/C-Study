#include <stdio.h>

int main()
{
	char perID[7];
	char name[10];
	
	fputs("�ֹι�ȣ �� 6 �ڸ��� �Է��ϼ���: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	
	fflush(stdin);
	//getchar(stdin);
	
	
	fputs("�̸��� �Է��ϼ��� : ", stdout);
	fgets(name, sizeof(name), stdin);
	
	printf("�ֹι�ȣ ���ڸ�: %s\n", perID);
	printf("��               ��: %s\n", name);
}
