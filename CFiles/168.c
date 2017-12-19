#include <stdio.h>
#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54

unsigned char R[HEIGHT][WIDTH], G[HEIGHT][WIDTH],B[HEIGHT][WIDTH];

int main()
{
	FILE *fp1 = fopen("file/aspect-ratio-circles-1024x768.bmp", "rb");
	FILE *fp2 = fopen("file/1024x768.jpg", "wb");
	
	int i, j;
	
	for(i=0; i < HEADER; i++)
		putc(getc(fp1), fp2);
	for(i=0; i < HEIGHT; i++)
		for(j=0; j < WIDTH; j++)
		{
			B[i][j] = getc(fp1); 
			G[i][j] = getc(fp1); 
			R[i][j] = getc(fp1);
		}
	for(i=0; i < HEIGHT; i++)
		for(j=0; j < WIDTH; j++)
		{
			putc((B[i][j]+G[i][j]+R[i][j])/3,fp2); 
			putc((B[i][j]+G[i][j]+R[i][j])/3,fp2); 
			putc((B[i][j]+G[i][j]+R[i][j])/3,fp2); 
		}		
}
