#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //할당 저장 공간 연결할 포인터 선언
	int size = 5; //한번에 할당된 저장된 크기에 int형 변수 5개 선언
	int count = 0; 
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int)); //calloc의 함수를 호출하는 인수는 2개(배열요소 5개인 int형의 저장공간이 필요)
	
	//무한 반복
	while (1)
	{
		printf("양수만 입력하세요 => ");
        scanf("%d", &num);//포인터를 사용하기에 해당 변수에 해당하는 주솟값에 저장
		if (num <= 0)break; 
		if (count == size) //값이 같은지 봄(원래 지정된 사이즈 '5'와 같게 되면 공간을 더 확보해준다)
		{
			size += 5; 
			pi = (int*)realloc(pi, size * sizeof(int));//기존에 있던것 pi //realloc를 사용할려면 임시로 할당 받아야한다(주소를 반환해서 포인터에 저장해서 사용) 

		}
		pi[count++] = num;

	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);//위의 조건에서 
	}
	free(pi);// 메모리 재활용 위해 반환


	return 0;//프로그램 종료

}