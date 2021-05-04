#include <stdio.h>

//함수를 선언
void fruit(void);
 
int main(void)
{

	fruit();

	return 0;



}
void fruit(void)
{
	printf("apple\n");
	fruit();
}