#include <stdio.h>

void book1(int, int);
void book2(int, int);
void book3(int, int);

void main()
{
	char* cl[] = { "메카","기계", "전자" };
	int i, j, k;

	printf(" 학과번호 \n \n 1. 메카 2. 기계 3. 전자\n \n");
	printf("--------------------------------------\n\n");

	printf(" 학과에 해당하는 번호를 입력하시오. : ");
	scanf_s("%d", &i);
	printf("\n");
	printf("--------------------------------------\n\n");

	printf(" 학년을 입력하시오. : ");
	scanf_s("%d", &j);
	printf("\n");
	printf("--------------------------------------\n\n");

	printf(" 듣는 과목의 수를 입력하시오. : ");
	scanf_s("%d", &k);
	printf("\n");
	printf("--------------------------------------\n\n");


	if (i == 1)
	{
		printf(" %s %d학년의 교재는 \n\n", *(cl + i - 1), j);
		book1(j, k);
	}
	else if (i == 2)
	{
		printf(" %s %d학년의 교재는 \n\n", *(cl + i - 1), j);
		book2(j, k);
	}
	else if (i == 3)
	{
		printf(" %s %d학년의 교재는 \n\n", *(cl + i - 1), j);
		book3(j, k);
	}
	else
		printf(" 입력오류! 다시 입력하시오.\n");
}