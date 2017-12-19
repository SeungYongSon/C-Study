#include <stdio.h>

struct children{
	unsigned int son : 2;
	unsigned int daughter : 2;
	unsigned int pet : 3;
}my;

int main()
{
	int temp;
	scanf("%d", &temp);
	my.son = temp;
	struct children my = {2, 2, 3};
}
