#include <stdio.h>
#include "user.h" //사용자 헤더 파일



int main()//return받아서 메인에서 호출
{
	int n1, n2;
	int result, num;
	input_data(&n1, &n2);//주솟값을 전달해줘야 다른데서 사용이 가능
	result = sum(n1, n2);
	/*printf("%d\n", num);*/
	printf("두 정수의 합 : %d\n", result);




	return 0;
}