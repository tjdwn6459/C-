#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");//a.txt파일을 만들고 그안에 문자열을 넣으면 열린다 "r"->읽기 위해서 파일을 연다
	if (fp == NULL) //특정한걸 가리키는게 없다 (의미 없는 주소)
	{
		printf("파일이 열리지 않습니다. \n");
			return 1;


	}

	while (1)
	{
		ch = fgetc(fp); //
		if (ch == EOF)//오류 발생 또는 파일의 데이터를 모두 읽었는지 확인
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;

}