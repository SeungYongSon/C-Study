#include <stdio.h>

int main()
{
	int n, num, max = 0, min = 100, i;
	
	printf("�л� ���� �Է� : ");
	scanf("%d", &n); 
	
	printf("������ �Է��ϼ��� :");
 
	for(i = 0; i< n; i++)
	{
		scanf("%d", &num);
		if(max < num)
			max = num;
		if(min > num)
			min = num;
	}
	printf("1�� : %d \n�õ� : %d", max, min);
}
