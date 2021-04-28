#include <stdio.h>
int main()
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; //a의값을 6으로 증가시킨후에 곱해서 한다
	post = (b++) * 3; //b가 증가되기전의 값 5를 3과 곱한다 

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d , 후위형 : (b++) *3 = %d\n", pre, post);


	
	return 0;
}