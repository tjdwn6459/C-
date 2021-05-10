#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary의 값 : %u\t", ary);//ary의 주솟값
	printf("ary의 주소 : %u\n", &ary);//ary의 주솟값
	printf("   ary + 1 : %u\t", ary + 1); // ary자체가 주소로 쓰일때는 첫번째 요소를 가리키니까 대상의 크기는 4씩 
	printf(" &ary + 1 : %u\n", &ary + 1);// &ary는 배열전체를 가리키기에 20이 된다 



	return 0;



}