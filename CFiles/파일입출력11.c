#include <stdio.h>

int main()
{
	FILE *afp, *bfp;
	int num = 10;
	int res;
	
	afp = fopen("m.txt", "wt");
	fprintf(afp, "%d", num);
	
	bfp = fopen("n.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);
	
	fclose(afp);
	fclose(bfp);
	
	bfp = fopen("n.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);
	
	fclose(bfp);
}
