#include <stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *ap = arr;
	int i;
	
	for(i= 0; i<5; i++)
		printf("%d\n", *(arr+i));
		
	for(i=0; i<5; i++){
		printf("%5d", *ap);
		ap++;
		//printf("%5d", ap[i]);
	}
	
	ap = arr;
	for(i=0; i<5; i++){
		scanf("%d", ap+i);
		//scanf("%d", &ap[i]);
	}
	
	for(i=0; i<5; i++){
		printf("%5d", *ap);
		ap++;
		//printf("%5d", ap[i]);
	}
}
