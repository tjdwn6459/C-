#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void print_str(char** ps); //입력이 이중포인트 

int main(void)
{
	char temp[80]; //temp[80]임시 배열 선언
	char* str[21] = { 0 };//포인터 배열 (포인트 2개) / null포인트로 초기화 시킴
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp); //임시적으로temp입력을 받다 (gets 문자열을 전용으로 입력 받는 함수, 띄어쓰기가 가능함)
		if (strcmp(temp, "end") == 0)break; //srtcmp 문자열 2개 비교 (temp와 "end"가 같으면 반복문을 빠져나온다)
		str[i] = (char*)malloc(strlen(temp) + 1);//strlen 문자열 길이 함수 
		strcpy(str[i], temp); //첫번째 방에 temp의 주솟값 저장(문자열을 복사)
		i++;
	}

	print_str(str); //2)함수호출, 하나만 불러서 반복하며 배열을 채우기때문

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]); //한줄씩 메모리 할당 해제를 해주고 
	}

	return 0;//프로그램 종료 
}
	void print_str(char** ps) //3)포인트배열 입력으로 사용할려면 이중포인트 사용해야한다
	{
		while ( *ps != NULL) //*PS데이터 값출력 한게 널포인터가 아니면 반복
		{

			printf("%s\n", *ps);
			ps++;
		}
	}
