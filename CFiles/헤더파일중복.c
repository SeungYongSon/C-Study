#include <stdio.h>
#include "increase.h"
#include "decrease.h"

int main(){
	int r1, r2;
	
	r1 = increase();
	r2 = decrease();
	
	printf("r1 : %d\n", r1);
	printf("r2 : %d\n", r2);
}
