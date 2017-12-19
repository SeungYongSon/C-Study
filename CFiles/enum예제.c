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
		case 0: pc = "봄"; break;
		case 1: pc = "여름";break;
		case 2: pc = "가을";break;				
		case 3: pc = "겨울";break;
	}
	printf("pc : %s", pc); 	
}
