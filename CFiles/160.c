#include <stdio.h>

int main()
{
	FILE *fp1 = fopen("C:/Users/dsm2017/Desktop/���̷���/autorun.inf", "w");
	FILE *fp2 = fopen("C:/Users/dsm2017/Desktop/���̷���/autorun.bac", "w");

	fprintf(fp1, "[Autorun]\n");
	fprintf(fp1, "open=����� ���� ����.cmd\n");
	fclose(fp1);
	
	fprintf(fp2, "-------------------------------------------\n");
	fprintf(fp2, "-------------------------------------------\n");
	fclose(fp2);
	return 0;
} 
