#include <stdio.h>

int main()
{
	int a[10], i, j= 0, Max = 0, temp;
	
	for(i = 0; i< 10; i++)
		scanf("%d", &a[i]);
	while(j < 3){
		for(i = 0; i< 10; i++){
			if(Max < a[i]){
				Max = a[i];
				temp = a[i];
			}
		}
		for(i = 0; i< 10; i++){	
			if(Max == a[i]){
				a[i] = 0;
				Max = 0;
			}
		}
		j++;
	}
	Max = temp;
	
	for(i = 0; i< 10; i++)
		printf("%d ", a[i]);	
	
	printf("\n\n%d\n", Max);
}
