#include <stdio.h>

int main()
{
	int score1, score2, score3;
	
	printf("세 점수를 공백으로 분리해서 입력하세요: ");
	scanf("%d %d %d", &score1, &score2, &score3);
	
	if(score1 >= score2 && score1 >= score3)
		printf("%d", score1);
	else if(score2 >= score1 && score2 >= score3)
		printf("%d", score2);
	/*
	else if(score3 >= score2 && score3 >= score1)
		printf("%d", score3); 
		
		↓↓↓↓↓↓↓↓↓↓↓↓↓↓ 
	*/
	else
		printf("%d", score3);
}

//scanf("%d, %d, %d", &a, &b, &c); => 1, 3, 5 이렇게 입력 
//scanf("%d=%d=%d", &a, &b, &c); => 1=3=5 이렇게 입력 
