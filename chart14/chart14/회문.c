#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[10];// 문자열 배열칸
	int length; //문자열 길이

	printf("문자열을 입력하세요 : "); //입력 받는 칸
	scanf("%s", str1);

	length = strlen(str1); //문자를 입력 받았을 때의 길이를 length에 저장


	for (int i = 0; i < length / 2; i++) // length 6, i =0일때 (반복해서 글자 비교)
	{
		if (str1[i] != str1[length - 1 - i]) //str1[0]번째 랑 str[5]번째 비교 한다 (비교값)
		{
			printf("회문이 아닙니다."); // 두개가 같지않으면 "회문이 아닙니다" 출력
			exit(0); //if 문 탈출
		}
		
	}
	
	
		printf("회문입니다"); //같으면 for문 돌고 "회문입니다"출력
		
	

	return 0;//프로그램 종료
}

//문자열을 입력 받다

// 문자열을 반으로 
// 각각 위치에 있는 문자를 비교-> 값이 같으면 ->회문입니다 출력
