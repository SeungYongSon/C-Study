#include <stdio.h>

int main()
{
	int n, num, max, min, i;
	
	printf("�л� ���� �Է� : ");
	scanf("%d", &n); 
	
	printf("������ �Է��ϼ��� :");
 
	scanf("%d", &num);
	min = num; 
	max = num;
	for(i = 1; i< n; i++)
	{
		scanf("%d", &num);
		if(max < num)
			max = num;
		else if(min > num)
			min = num;
	}
	printf("1�� : %d \n�õ� : %d", max, min);
}
