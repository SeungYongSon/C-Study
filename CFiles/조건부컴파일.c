#include <stdio.h>

#define VER 5 //ġȯ�� �κ��� �ִ� ��ũ�θ� ���� 
#define BIT16 //ġȯ�� ������ ���� ��ũ�θ� ���� 

int main()
{
	int max;

#if VER >= 6 //��ũ�θ� VER�� 6 �̻��̸� 
	printf("���� %d�Դϴ�.\n", VER); //�� ���� ������ 
#endif //if�� �� 

#ifdef BIT16 //��ũ�θ� BIT16�� ���ǵǾ� ������ 
	max = 32767; // �̹��� ������ 
#else //���ǵǾ� ���� ������ 
	max = 2147483647; //�� ���� ������ 
#endif //ifdef�� �� 
	
	printf("int�� ������ �ִ� : %d\n", max);
	
	return 0;
}
