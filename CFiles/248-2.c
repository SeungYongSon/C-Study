#include <stdio.h>

int main()
{
	int H[10], i, j, t;
	for(i = 0; i< 10; i++)
		scanf("%d", &H[i]);
	for(i = 0; i<3; i++)
		for(j= i+1; j< 10; j++)
			if(H[i] < H[j])
			{
				t = H[i];
				H[i] = H[j];
				H[j] = t;
			}
	
	for(i = 0; i< 10; i++)
		printf("%d ", H[i]);		
	printf("\n\n%d\n", H[2]);
}
