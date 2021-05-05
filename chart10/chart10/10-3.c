#include <stdio.h>
int main(void)
{
	int ary[3] = {10, 20, 30 }; //방안의 데이터
	int *pa = ary;//포인터 pa가 ary를 가리키다
	int i; //제어변수 선언

	printf(" 배열의 값 :  ");
	for (i = 0; i < 3; i++)//배열에 있어서는 for문을 쓴다 
	{
		printf("%d", *pa); //0번방 1번방 2번방 차례대로 출력한다
		pa++;//다음 배열요소를 가리키도록 1씩증가 시킨다
	}



	return 0;
}