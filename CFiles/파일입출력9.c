#include <stdio.h>

struct in{
	char name[20];
	float divi;	
	int k,e,m;
	int sum;
	int res;
}forma;

int main()
{	
	FILE* ifp = fopen("scoredata.txt", "r");
	FILE* ofp = fopen("scoredata_in.txt", "w");
	
	if(ifp == NULL || ofp == NULL){
		printf("¿¡·¯..\n");
		return 1;
	}
	
	while(1)
	{
		forma.res= fscanf(ifp, "%s %d %d %d", forma.name, &forma.k, &forma.e, &forma.m);
		if(forma.res == EOF)
			break;
		forma.sum = forma.k + forma.e + forma.m;
		forma.divi = forma.sum / 3;	
		
		fprintf(ofp,"%s %d %.1f\n", forma.name, forma.sum, forma.divi);	
	}
	fclose(ifp);
	fclose(ofp);
}
