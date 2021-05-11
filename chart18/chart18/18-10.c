#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r"); //문자열이 있어여함 

	fscanf(fp, "%d", &age);
	while (fgetc(fp) != '\n');
	fgets(name, sizeof(name), fp);

	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);

	return 0;

}