#include <stdio.h>

int main()
{
	char N[10];
	int dna = 0, i;
	
	printf("�������� DNA ������ �Է� :");
	scanf("%s", N);
	for(i = 0; N[i] != '\0'; i++)
		dna += (N[i] - 48);
	printf("%d %s\n", dna,(dna % 7 == 4) ? "����" : "�Ϲ���");
}
