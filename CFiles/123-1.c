#include <stdio.h>

int main()
{
	int score[5];
	int i, min =0;
	
	printf("%d번 학생의 프로그래밍 성적을 입력하세요. : ", i+1);
	scanf("%d", &score[0]);
	min = score[0];	
	
	for(i = 1; i<5; i++)
		scanf("%d", &score[i]);
		
	for(i = 0; i<5; i++)
		if(min > score[i])
			min = score[i];
	printf("최저 성적 : %d", min);
}
