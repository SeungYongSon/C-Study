#include <stdio.h>

int main()
{
	int a, b, c, wide=0, max = 0;
	
	printf("운동장 3개의 가로, 세로의 길이를 차례로 입력하세요.\n");
	for(c = 0; c < 3; c++)
	{
		scanf("%d %d", &a, &b);
		wide = a*b;
		
		if(wide>=max)
			max = wide;
	}
	printf("가장 큰 운동장의 넓이는 %d 입니다. \n", max);
}
