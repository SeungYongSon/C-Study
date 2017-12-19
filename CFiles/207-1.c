#include <stdio.h>

int main()
{
	int n, num, max = 0, min = 100, i;
	
	printf("학생 수를 입력 : ");
	scanf("%d", &n); 
	
	printf("점수를 입력하세요 :");
 
	for(i = 0; i< n; i++)
	{
		scanf("%d", &num);
		if(max < num)
			max = num;
		if(min > num)
			min = num;
	}
	printf("1등 : %d \n꼴등 : %d", max, min);
}
