#include <stdio.h>

int main()
{
	char str[101];
	int i = 0;
	printf("ют╥б: ");
	scanf("%s", str);
	
	//for(i = 0; str[i] != '\0'; i++){}
	while(str[i])
		i++;
		
	//printf("->  ");
	for(i--; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");
}
