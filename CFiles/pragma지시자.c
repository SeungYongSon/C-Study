#include <stdio.h>

#pragma pack(push, 1) //바이트 얼라인먼트를 1로 바꿈 

typedef struct{
	char ch;
	int in;
}Sample1; // 1 + 4 = 5


#pragma pack(pop) // 바꾸기(push) 전의 바이트 얼라인먼트 적용. 
//                   pop: 이전 규칙을 복원 
typedef struct{
	char ch;
	int in;
}Sample2; // 4 + 4 = 8

int main(){
	printf("Sample1 구조체의 크기 : %d바이트\n", sizeof(Sample1));  //5바이트 
	printf("Sample2 구조체의 크기 : %d바이트\n", sizeof(Sample2));  //8바이트 
}
