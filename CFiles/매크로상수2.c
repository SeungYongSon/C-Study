#include <stdio.h>

#define DOUBLE(x) x+x

int main()
{
	int iVAL;
	double fVAL;
	
	fputs("������ �Է��ϼ���: ", stdout);
	scanf("%d", &iVAL);
	printf("����� %d �Դϴ�.\n", DOUBLE(iVAL));
	
	fputs("�Ǽ��� �Է��ϼ���: ", stdout);
	scanf("%lf", &fVAL);
	printf("����� %lf �Դϴ�.\n", DOUBLE(fVAL));
	printf("������� %lf �Դϴ�.\n", -DOUBLE(fVAL));	
}
