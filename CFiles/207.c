#include <stdio.h>

int main()
{
	int n, num, max, min, i;
	
	printf("학생 수를 입력 : ");
	scanf("%d", &n); 
	
	printf("점수를 입력하세요 :");
 
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
	printf("1등 : %d \n꼴등 : %d", max, min);
}
