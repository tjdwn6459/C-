//5명의 사원 아이디 이른 급여를 저장 할 구조체
//구조체의 변수 선언
//입력 받고 출력
//사원의 급여 총액 평균(for)-> 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct employee
{
	int id;//int형 멤버 선언
	char* name; //동적할당 멤버 선언
	int salary;


}Employee;
int main()
{
	 Employee p[5];
	 char str[20]; //메모리 동적할당 위해 저장
	 int i;
	 int sum;
	 double avg;
	 
	 for ( i = 0; i < 2 ; i++)
	 {
		 printf("사원 아이디 : ");
		 scanf("%d", &p[i].id);
		 printf("사원 이름 : ");
		 scanf("%s", str);
		 printf("한달 급여 : ");
		 scanf("%d", &p[i].salary);
		 p[i].name = (char*)malloc(strlen(str) + 1); // strlen(str) +1 문자열 길이를 계산 널문자도 모함하게 저장공간 할당, malloc의 함수의 인수로 줌, 
		 strcpy(p[i].name, str);
		

	 }
	 
	 for (i = 0; i < 2; i++)
	 {
		 printf("사원 아이디 : %d 사원 이름 :%s 한달 급여 :%d ", p[i].id, p[i].name, p[i].salary);
	 }
	 sum = 0;
	 for (i = 0; i < 2; i++)
	 {
		 sum += p[i].salary;
		
	 }
	

	 avg = sum / 2.0;
	 printf("합계: %d 평균 : %.1lf", sum, avg);

	 

	 return 0;
	
	
	 
}

