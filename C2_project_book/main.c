#include <stdio.h>

void book1(int, int);
void book2(int, int);
void book3(int, int);

void main()
{
	char* cl[] = { "��ī","���", "����" };
	int i, j, k;

	printf(" �а���ȣ \n \n 1. ��ī 2. ��� 3. ����\n \n");
	printf("--------------------------------------\n\n");

	printf(" �а��� �ش��ϴ� ��ȣ�� �Է��Ͻÿ�. : ");
	scanf_s("%d", &i);
	printf("\n");
	printf("--------------------------------------\n\n");

	printf(" �г��� �Է��Ͻÿ�. : ");
	scanf_s("%d", &j);
	printf("\n");
	printf("--------------------------------------\n\n");

	printf(" ��� ������ ���� �Է��Ͻÿ�. : ");
	scanf_s("%d", &k);
	printf("\n");
	printf("--------------------------------------\n\n");


	if (i == 1)
	{
		printf(" %s %d�г��� ����� \n\n", *(cl + i - 1), j);
		book1(j, k);
	}
	else if (i == 2)
	{
		printf(" %s %d�г��� ����� \n\n", *(cl + i - 1), j);
		book2(j, k);
	}
	else if (i == 3)
	{
		printf(" %s %d�г��� ����� \n\n", *(cl + i - 1), j);
		book3(j, k);
	}
	else
		printf(" �Է¿���! �ٽ� �Է��Ͻÿ�.\n");
}