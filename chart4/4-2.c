#include <stdio.h>

int main()
{

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;  /*실수 나누기 실수라 실수형태가 */
	banana = 5 / 2;   /*정수 나누기 정수라 정수 형태*/
	orange = 5 % 2; 

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}