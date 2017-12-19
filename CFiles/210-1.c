#include <stdio.h>

int m1 = 0 , m2 = 0;

int asdf(int num)
{
	if(num % 2 == 0)
	{
		if(m1 < num)
			m1 = num;	
	}
	else
	{
		if(m2 < num)
			m2 = num;	
	}
}

int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	
	asdf(n1);
	asdf(n2);
	asdf(n3);
	asdf(n4);
	asdf(n5);
	asdf(n6);
	asdf(n7);
	asdf(n8);
	asdf(n9);
	asdf(n10);
	
	if(m1 > 0)
		printf("%d ", m1);
	if(m2 > 0)
		printf("%d ", m2);
	printf("\n");
}
