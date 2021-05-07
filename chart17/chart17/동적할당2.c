#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//점수를 받고 총점 내기
int main(void)
{
	int num;
	int* p;
	int sum = 0;
	printf("몇개의 과목을 저장하시겠습니까 ?  ");
	scanf("%d", &num); // 저장할 과목을 입력 받음

	//과목의 개수만큼 저장공간 확보(동적할당)
	p = (int*)malloc(sizeof(int) * num);
	//1) malloc의 반환형이 void라 형변환
	//2) 메모리의 공간의 크기를 계산 
	//3) 과목의 개수만큼 메모리를 할당

	if (p == NULL)
	{
		printf("error");
		exit(1); //비정상 종료 exit(n) 0이 아닌 상수는 비정상 종료
	}

	//만든 저장공간에다가 받은 점수의 주소값을 저장
	for (int i = 0; i < num; i++)
	{
		printf("점수 입력 :  ");
		scanf("%d", &p[i]);
	}

	//주소값의 포인터가 가리키는 곳에 값을 출력
	for (int i = 0; i < num; i++)
	{
		printf("%d번째 과목의 점수 : %d\n", i + 1, p[i]);
	}

	//해당 배열의 값이 돌면서 모두 더해 값을 출력한다
	for (int i = 0; i < num; i++)
	{
		sum += p[i];
	}

	printf("총합계는 : %d", sum);
	

	return 0;
}