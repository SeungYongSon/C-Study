#include <stdio.h>

int main()
{
	int i, a, b, temp, h = 0;
	
	
	printf("운동장 3개의 가로, 세로의 길이를 차례로 입력하세요.\n");
	for(i = 1; i<=3; i++)
	{
		scanf("%d %d", &a, &b);
		
		if(h <= a*b && (a <= 1000 || b <= 1000))
		{
			h = a*b;
			temp = h/a;
		}
		
	}
	printf("가장 큰 운동장의 넓이는 %d * %d = %d 입니다. \n", temp, h/temp, h);
}
