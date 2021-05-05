#include <stdio.h>
#include <string.h>

//문자열 전용 입출력 함수 :gets puts
int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);  //중간에 탭문자를 사용해 하나의 문자열로 배열에 저장
	puts("입력된 문자열 : "); //문자열 출력후 자동으로 줄바꿈 
	puts(str);//배열에 저장된 문자열 출력




	return 0;
}