#include <stdio.h>

int main()
{
	int Stu[4][3];
	int i, j;
	 
	for(i = 0; i<4; i++)
	{
		printf("%d�� �л��� ����, ���α׷��� ������ �Է��Ͻÿ� : ", i+1);
		scanf("%d %d", &Stu[i][0], &Stu[i][1]);
		Stu[i][2] = Stu[i][0] + Stu[i][1];
	}
	
	for(i = 0; i<4; i++)
		printf("%d�� �л��� ����: %d \n", i+1,Stu[i][2]);
}
