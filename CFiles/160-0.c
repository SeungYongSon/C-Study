#include <stdio.h>

int main()
{
	FILE *fp1 = fopen("file/out.txt", "w");
	fprintf(fp1, "%d\n", 1234142);
	fclose(fp1);
	return 0;
} 
