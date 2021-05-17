#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문자와 문자열을 입력
int main()
{

	char grade; //학점을 입력할 변수
	char name[20];//이름을 입력할 배열 (배열은 무조건 문자를 넣기에 방을 설정 해줘야 한다)

	printf("학점입력 : ");
	scanf("%c", &grade);//학점의 주솟값을 입력
	printf("이름입력 : ");
	scanf("%s", name);// name배열에 이름 문자열을 입력 
	printf("%s의 학점은 %c입니다.\n", name, grade);//주솟값에 해당 값을 찾아 출력 한다

	return 0;
}