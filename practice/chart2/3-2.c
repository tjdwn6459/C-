#include <stdio.h>

int main()
{
	int age;
	double height;

	printf("나이와 키를 입력 하세요 : ");
	scanf_s("%d%lf", &age, &height);
	printf("나이는 %d, 키는 %lf 입니다. ", age, height);


		return 0;
	
}