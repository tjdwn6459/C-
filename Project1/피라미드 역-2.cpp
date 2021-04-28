#include <stdio.h>
int main()
{
	int i, j, h;

	for (i = 0; i < 6; i++)
	{
		/*for (j = 0; j<i; j++ )*/
		for (j = i ; j > 0; j--)
		{
			printf(" "); 
		}
		for (h = 0; h < (11 - 2 * i); h++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}