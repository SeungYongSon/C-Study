#include <stdio.h>

#define PI 3.14159
#define LIMIT 100.0
#define MSG "PASSSED!!!!"
#define EPR_PRN printf("������ ������ϴ�!\n")

int main()
{
	double radius, area;
	
	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &radius);  
	area = PI * radius * radius;
	if(area > LIMIT) EPR_PRN;
	else printf("���� ���� : %.2lf (%s) \n", area, MSG);
	
	return 0;
}
