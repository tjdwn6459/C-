#include <stdio.h>

void fruit(int count);

int main(void)
{

	fruit(1); //입력 값이 1

	return 0;
}
void fruit(int count) //함수를 찾아서 실행 count에는 1저장 됨
{
	printf("apple\n"); //1일때 하나찍히고 
	if (count == 3)return; // 조건문 만족 시키지 않으면
	fruit(count + 1);// 다시 실행 
}