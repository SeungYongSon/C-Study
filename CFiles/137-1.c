#include <stdio.h>

int main()
{
	int score[10] = {18, 77, 68, 54, 99, 15, 56, 97, 64, 48};
	int i, max =0;
	
	for(i = 0; i< 10; i++)
		max = max < score[i] ? score[i] : max;		
	printf("%d\n", max);
}
