#include <stdio.h>

void input_ary(int *, int);
void print_ary(int *, int);

int main()
{
	int ary[5] = {10, 20, 30, 40, 50};
	
	int size = sizeof(ary)/sizeof(ary[0]);
	print_ary(ary, size);
	input_ary(ary, size); 
	print_ary(ary, size);
	return 0;
}

void input_ary(int *pa, int size){
	int i;
	for(i=0; i<size; i++)scanf("%d", pa+i);
}

void print_ary(int *pa, int size){
	int i;
	for(i=0; i<size; i++)printf("%d ", pa[i]); // *(pa+i);
	printf("\n"); 
}
