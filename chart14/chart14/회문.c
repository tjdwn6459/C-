#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[10];
	int length; //문자열 길이

	printf("문자열을 입력하세요 : ");
	scanf("%s", str1);

	length = strlen(str1);


	for (int i = 0; i < length / 2; i++)
	{
		if (str1[i] != str1[length - 1 - i])
		{
			printf("회문이 아닙니다.");
			exit(0);
		}
		
	}
	
	
		printf("회문입니다");
		
	

	return 0;
}

//문자열을 입력 받다

// 문자열을 반으로 
// 각각 위치에 있는 문자를 비교-> 값이 같으면 ->회문입니다 출력
