#include <stdio.h>

double ary_avg(int *);

int main()
{
	int arv[5] = {75, 80, 92, 88, 98};
	double res;
	res = ary_avg(arv);
	printf("�迭�� ����� : %.2lf \n", res);
	return 0;
}

double ary_avg(int *ap)
{
	int i, tot = 0;
	double average;
	for(i = 0; i< 5; i++){
		tot += ap[i];
	}
	average = tot/5.0;
	return average;
}
