#include <stdio.h>

//´ëÀÔ µ¡¼À »¬¼À °ö¼À ³ª´°¼ÀÀÇ ¿¬»ê
int main()
{
	int a, b; //º¯¼ö a, b¼±¾ð
	int sum, sub, mul, inv;//¿¬»ê°ªÀ» ´ãÀ» °ø°£ ¼±¾ð

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("aÀÇ °ª : %d,bÀÇ°ª : %d\n", a, b);
	printf("µ¡¼À : %d\n", sum);
	printf("»¬¼À : %d\n", mul);
	printf("°ö¼À : %d\n", sub);
	printf("aÀÇ À½¼ö ¿¬»ê : %d\n", inv);


	return 0;
}