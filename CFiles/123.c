#include <stdio.h>

int main()
{
	int score[5];
	int i, max =0;
	
	for(i = 0; i<5; i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է��ϼ���. : ", i+1);
		scanf("%d", &score[i]);
	}
	for(i = 0; i<5; i++)
		if(max < score[i])
			max = score[i];
	printf("�ְ��� ���� : %d", max);
}