#include <stdio.h>

int input_data(void);
double average(void);
void print_data(double);


int count = 0;
static int total = 0;//전역변수(다른파일에서는 사용이 안댐)

int main(void)
{
	double avg;

	total = input_data();
	avg = average();
	print_data(avg);


	return 0;
}

void print_data(double avg)
{
	printf(" 입력한 영수의 개수 : %d\n", count);
	printf(" 전체의 합과 평균 : %d, %.1lf\n", total, avg);
}