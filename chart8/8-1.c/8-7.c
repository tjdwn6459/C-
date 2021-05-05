#include <stdio.h>

int main(void)
{
	char str[5]; //배열을 초기화 하지 않음

	str[0] = 'O'; 
	str[1] = 'K';
	str[2] = '\0'; //널값을 넣으면 ok만 출력된다
	printf("%s\n", str); 
	//직접 문자를 넣고 함수로 출력 하니 저장된 다음 null값이 없어서 쓰레기 값 출력




	return 0;
}