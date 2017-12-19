#include <stdio.h>

#define WIDTH 5
#define HEIGHT 5

int main()
{
	FILE *fp = fopen("file/csv_file.csv", "w");
	int i, j, n = 1;
	
	for(i= 1; i<= HEIGHT; i++)
	{
		for(j= 1; j<=WIDTH; j++)
		{
			fprintf(fp, "%d", n++);
			if(j!=WIDTH)fprintf(fp,",");	
		}
		fprintf(fp, "\n");
	}
	return 0;
}
