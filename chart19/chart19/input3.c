#include <stdio.h>

extern int count;
int total = 0; //average total

int input_data(void)
{

	int pos;

	while (1)
	{
		printf("��� �Է� : ");
		scanf_s("%d", &pos);
		if (pos < 0) break;
		count++;
		total += pos;


	}

	return total;


}