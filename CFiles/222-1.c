#include <stdio.h>

int main()
{

	int N, dna = 0, temp = 0;
	
	printf("�������� DNA ������ 10�ڸ� �Է� :");
	scanf("%d", &N);
	while(N != 0)
	{
		dna += N%10;
		N /= 10;
	}
	printf("%d %s\n", dna,(dna % 7 == 4) ? "����" : "�Ϲ���");

}
