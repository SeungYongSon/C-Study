#include <stdio.h>

#pragma pack(push, 1) //����Ʈ ����θ�Ʈ�� 1�� �ٲ� 

typedef struct{
	char ch;
	int in;
}Sample1; // 1 + 4 = 5


#pragma pack(pop) // �ٲٱ�(push) ���� ����Ʈ ����θ�Ʈ ����. 
//                   pop: ���� ��Ģ�� ���� 
typedef struct{
	char ch;
	int in;
}Sample2; // 4 + 4 = 8

int main(){
	printf("Sample1 ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample1));  //5����Ʈ 
	printf("Sample2 ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample2));  //8����Ʈ 
}
