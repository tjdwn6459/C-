//문자열 동적할당//
//1) 문자열을 입력받기 위한 충분한 크기의 문자배열 선언
//2) 동적할당 영역을 연결할 포인터 배열 선언
//3) 문자열 입력
//4) 문자열 저장공간->main 의 입력값과 같은 형태로 형변환->복사하는 크기와 같게 메모리 할당 (null값 +1)
//5) 입력받은 문자를 동적할당영역에서 문자열 복사

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

#include <string.h>

int main(void)
{
	char temp[50];
	char* str[3];
	int i;

	for (int i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);//gets는 띄어쓰기로 입력을 받고 개행이 된다
		str[i] = (char*)malloc(strlen(temp) + 1); //str포인터가 가리키는 공간을 만들어준다 
		strcpy(str[i], temp);//그 배열마다 temp의 값을 복사 한다 

	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);//그 배열을 돌면서 값이 출력된다
	}




	return 0;
}