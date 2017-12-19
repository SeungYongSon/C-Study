#include <stdio.h>

int main()
{
	char string[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char string2[6] = "world";
	int i;
	for(i = 0; string[i] != '\0'; i++)
		printf("%c", string[i]);
		
	//for(i = 0; string2[i] != '\0'; i++)
	i =0;
	while(string2[i] != '\0')
	{
		printf("%c", string2[i]);
		i++;
	}
}
