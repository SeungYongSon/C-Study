#include <stdio.h>

void input_data(int *, int *);
double average(int, int);

int extern main(){
	int a,b;
	double avg;
	
	input_data(&a, &b);
	avg = average(a,b);
	printf("%d¿Í %dÀÇ Æò±Õ : %1.lf\n", a, b, avg);
	
	system("pause");
	
	return 0;
} 
