#include <stdio.h>

int main()
{
	int score1, score2, score3;
	
	printf("�� ������ �������� �и��ؼ� �Է��ϼ���: ");
	scanf("%d %d %d", &score1, &score2, &score3);
	
	if(score1 >= score2 && score1 >= score3)
		printf("%d", score1);
	else if(score2 >= score1 && score2 >= score3)
		printf("%d", score2);
	/*
	else if(score3 >= score2 && score3 >= score1)
		printf("%d", score3); 
		
		��������������� 
	*/
	else
		printf("%d", score3);
}

//scanf("%d, %d, %d", &a, &b, &c); => 1, 3, 5 �̷��� �Է� 
//scanf("%d=%d=%d", &a, &b, &c); => 1=3=5 �̷��� �Է� 
