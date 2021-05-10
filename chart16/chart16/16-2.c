#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //동적할당 연결할 포인터 선언
	int i ,sum= 0;
	

	pi = (int*)malloc(5 * sizeof(int)); //1)메모리 사이즈를 측정해 저장공간 할당 2)반환값을 위해 형변환 3) 포인터에 주소를 저장 
	if (pi == NULL)
	{

		printf("메모리가 부족합니다\n"); //할당을 못 받음
		exit(1);//error가 나서 강제종료
	}

	printf("다섯 명의 나이를 입력하세요.");
	for (i = 0; i < 5; i++)
	{

		scanf("%d", &pi[i]); //포인터의 저장할 배열요소 입력 
		sum += pi[i];  //값을 집어넣고 연속적인 값을 계산할때는 초기화 시켜줘야한다(쓰레기 값이 들어갈 수도 있음)
                       //배열요소에 저장된 주솟값을 찾아 데이터를 더한다 
	}

	printf(" 다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0)); //합계에서 나누기 5를 한만큼 의 값이 프린트 해서 값이 나온다 
	free(pi);//재활용 할 수 있게 값 반환 

	

	return 0;//프로그램 종료
}