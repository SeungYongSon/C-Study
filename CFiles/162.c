#include <stdio.h>

int main()
{
	FILE *fp3 = fopen("file/out2.txt", "a");
	fprintf(fp3, "hello!\n");
	fclose(fp3);
	return 0;
}
