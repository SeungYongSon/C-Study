#include <stdio.h>

int main()
{
	int a, b, c, wide=0, max = 0;
	
	printf("��� 3���� ����, ������ ���̸� ���ʷ� �Է��ϼ���.\n");
	for(c = 0; c < 3; c++)
	{
		scanf("%d %d", &a, &b);
		wide = a*b;
		
		if(wide>=max)
			max = wide;
	}
	printf("���� ū ����� ���̴� %d �Դϴ�. \n", max);
}
