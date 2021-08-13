#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, grade;

	/*정수입력 후 문자 입력*/
	printf("학번 입력 : ");
	scanf("%d", &num);

	
	getchar();	// 버퍼에 남아있는 개행문자 제거

	printf("학점 입력 : ");
	grade = getchar(); //입력되 학점 저장


	/*
	* 문자 입력 후 정수 입력
	printf("학점 입력 : ");
	grade = getchar();
	// 개행문자 제거 필요 없음
	printf("학번 입력 : ");
	scanf("%d", &num);
	*/

	printf("학번 : %d, 학점 : %c", num, grade); //입력 받은 문자의 주솟값을 저장 후 출력

	return 0;
}