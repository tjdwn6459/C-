#include <stdio.h>

//�Լ��� ����
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