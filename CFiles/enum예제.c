#include <stdio.h>

enum seon{
	SPRING,
	SUMMER,
	FALL,
	WINTER
};


int main()
{
	enum seon ss;
	char *pc;
	
	ss = SPRING;
	
	switch(ss)
	{
		case 0: pc = "��"; break;
		case 1: pc = "����";break;
		case 2: pc = "����";break;				
		case 3: pc = "�ܿ�";break;
	}
	printf("pc : %s", pc); 	
}
