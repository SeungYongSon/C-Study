#include <stdio.h>

int main()
{
	int i, a, b, temp, h = 0;
	
	
	printf("��� 3���� ����, ������ ���̸� ���ʷ� �Է��ϼ���.\n");
	for(i = 1; i<=3; i++)
	{
		scanf("%d %d", &a, &b);
		
		if(h <= a*b && (a <= 1000 || b <= 1000))
		{
			h = a*b;
			temp = h/a;
		}
		
	}
	printf("���� ū ����� ���̴� %d * %d = %d �Դϴ�. \n", temp, h/temp, h);
}
