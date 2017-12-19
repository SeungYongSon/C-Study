#include <stdio.h>

int main()
{
	int i, num = 0;
	
	for(i = 1; i<= 5; i++) //for(시작값; 반복조건; 증감식){ 
	{						//	반복 조건이 참일 경우 실행되는 명령문 
							//}
		printf("%d ", i);
		num += i;
	}
	printf("\n1~100까지 합은 %d입니다.\n", num);
	num = 0; 
	for(i = 1; i<= 5; ++i) //for(시작값; 반복조건; 증감식){ 
	{						//	반복 조건이 참일 경우 실행되는 명령문 
							//}
		printf("%d ", i);
		num += i;
	}
	printf("\n1~100까지 합은 %d입니다.\n", num);
	num = 0;
	
	
	for(i = 1; i<= 100; i++) //for(시작값; 반복조건; 증감식){ 
	{						//	반복 조건이 참일 경우 실행되는 명령문 
							//}
		printf("%d ", i);
		num += i;
	}
	printf("\n1~100까지 합은 %d입니다.\n", num);
}

