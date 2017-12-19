#include <stdio.h>

int main()
{
	int Stu[4][3];
	int i, j;
	 
	for(i = 0; i<4; i++)
	{
		printf("%d번 학생의 수학, 프로그래밍 성적을 입력하시오 : ", i+1);
		scanf("%d %d", &Stu[i][0], &Stu[i][1]);
		Stu[i][2] = Stu[i][0] + Stu[i][1];
	}
	
	for(i = 0; i<4; i++)
		printf("%d번 학생의 점수: %d \n", i+1,Stu[i][2]);
}
