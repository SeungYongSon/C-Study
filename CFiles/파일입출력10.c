#include <stdio.h>

int main()
{
	FILE *fp;
	int age;
	char name[20];
	
	fp = fopen("c.txt", "r");
	if(fp == NULL){
		printf("ERROR!!!!!!\n");
		return 1;
	}
	
	fscanf(fp, "%d", &age);
	//fscanf(fp, "%s", name); // ��� ����: 17 �̸�:  �浿  
	
	//fflush(fp); //-> ������ �� ����. r �϶� ������� ����. (���� ���� �Լ���) �׷��� r���� ����ϸ� �ȵ� 
	//fgetc(fp); 1��° ��� -> �ѱ���(����) �а� �ѹ��� �о �״��� �̸��� ���� 
	//while(fgetc(fp) != '\n'){} 2��° ��� -> ���๮��(����, \n) �� �ƴѵ��� ������� Ż�� 
	//---> ��� ����: 17 �̸�: ȫ �浿 

	//fgetc�� ���� ���� 
	fgetc(fp);	
	fgets(name, sizeof(name), fp);
	
	printf("���� : %d, �̸� : %s", age, name);
	fclose(fp);
	
	return 0;

} 
