#include <stdio.h>

void book1(int a, int b)
{
	int c, d, p, q, r;
	int sum = 0;
	typedef struct
	{
	    int m;
		char* n;
		char* n1;
		char* n2;
		int y;
	}menu;

	menu  m1[] =
	{
		{ 30000, "��Ʃ��Ʈ �������� 8��","����1" , "���ǻ� 1", 2014},
		{ 25000, "������2","����2" , "���ǻ� 2", 2015},
		{ 15000, "������ ����","����3" , "���ǻ� 3", 2011},
		{ 35000, "�Ϲ�ȭ��","����4" , "���ǻ� 4", 2016},
		{ 40000, "ȸ���̷�","����5" ,"���ǻ� 5", 2008},
		{ 20000, "READING EXPLORER","����6" , "���ǻ� 6", 2017}
	};
		// 1�г� -----------------------------------------------------
	menu  m2[] =
	{
		{ 40000, "���м��� 1 6��", "����1", "���ǻ� 1", 2018},
		{ 45000, "C��� �������","����2" , "���ǻ� 2", 2017 },
		{ 30000, "������ 8��","����3" , "���ǻ� 3", 2018 },
		{ 35000, "ȸ���̷�","����4" , "���ǻ� 4", 2012 },
		{ 30000, "����ȸ��","����5" , "���ǻ� 5", 2017 },
		{ 25000, "����ȸ�ν��� 3��","����6" , "���ǻ� 6", 2016 },
		{ 40000, "��ī����2-7", "����7", "���ǻ� 7", 2018 },
		{ 30000, "��ī����2-8", "����8", "���ǻ� 8", 2016 }
	};
		// 2�г� -----------------------------------------------------
	menu  m3[] =
	{
		{ 40000, "��ī����3-1", "����1", "���ǻ� 1", 2018 },
		{ 45000, "��ī����3-2", "����2", "���ǻ� 2", 2014 },
		{ 30000, "��ī����3-3", "����3", "���ǻ� 3", 2015 },
		{ 35000, "��ī����3-4", "����4", "���ǻ� 4", 2012 },
		{ 20000, "��ī����3-5", "����5", "���ǻ� 5", 2017 },
		{ 25000, "��ī����3-6", "����6", "���ǻ� 6", 2016 },
		{ 30000, "��ī����3-7", "����7", "���ǻ� 7", 2015 },
		{ 40000, "��ī����3-8", "����8", "���ǻ� 8", 2017 },
		{ 35000, "��ī����3-9", "����9", "���ǻ� 9", 2019 }
	};
		// 3�г� -----------------------------------------------------
	menu  m4[] =
	{
		{ 40000, "��ī����4-1", "����1", "���ǻ� 1", 2019 },
		{ 45000, "��ī����4-2", "����2", "���ǻ� 2", 2017 },
		{ 30000, "��ī����4-3", "����3", "���ǻ� 3", 2014 },
		{ 35000, "��ī����4-4", "����4", "���ǻ� 4", 2013 },
		{ 20000, "��ī����4-5", "����5", "���ǻ� 5", 2015 }
	};
		// 4�г� -----------------------------------------------------
	
	if ((a == 1)) // 1�г� ----------------------------------------------------------------------------------

	{
		for (c = 0; c < sizeof(m1)/sizeof(menu); c++)
		{
			printf(" %d.%s(%s, %s ���ǻ�, %d��) ����: %d��\n", c+1, m1[c].n, m1[c].n1 ,m1[c].n2, m1[c].y ,m1[c].m);
			printf("\n");
		}
		printf("--------------------------------------\n\n");

		printf(" ���� ������ ���ϸ� 1, �׷��� ������ 2���� �Է��Ͻÿ� : ");
		scanf_s("%d", &p);
		printf("\n\n");

		if (p == 1)
		{
			printf(" ������ ���ϴ� ������ ������ �Է��Ͻÿ�. :");
			scanf_s("%d", &q);
			printf("\n");
			for (c = 0; c < q; c++)
			{
				printf(" ������ ������ ��ȣ�� �Է��Ͻÿ�. : ");
				scanf_s("%d", &r);
				printf("\n");

				printf(" ������ ������ �ݾ��� �Է��Ͻÿ�. : ");
				scanf_s("%d", &m1[r - 1].m);
				printf("\n\n");

				printf(" %s ������ �ݾ��� %d������ ����Ǿ����ϴ�.\n", m1[r-1].n, m1[r - 1].m);
				printf("\n\n");
			}
		}
		printf("--------------------------------------\n\n");

		printf(" �����ϴ� ���� �ش��ϴ� ��ȣ�� �Է��Ͻÿ�.");

		for (c = 0; c < b; c++)
		{
			scanf_s("%d", &d);
			sum += m1[d-1].m;
			printf("\n\n ����� ������ %s ������ ���� ������ %d�� �Դϴ�.\n",m1[d-1].n, m1[d-1].m);
		}
		printf("\n\n");
		printf(" �����Ͻ� ������ ���� �ݾ��� %d�� �Դϴ�.\n", sum);
	}

	// 2�г� ----------------------------------------------------------------------------------
	else if ((a == 2))
	{
		for (c = 0; c < sizeof(m2) / sizeof(menu); c++)
		{
			printf(" %d.%s(%s, %s ���ǻ�, %d��) ����: %d��\n", c + 1, m2[c].n, m2[c].n1, m2[c].n2, m2[c].y, m2[c].m);
			printf("\n");
		}
		printf("--------------------------------------\n\n");

		printf(" ���� ������ ���ϸ� 1, �׷��� ������ 2���� �Է��Ͻÿ� : ");
		scanf_s("%d", &p);
		printf("\n\n");

		if (p == 1)
		{
			printf(" ������ ���ϴ� ������ ������ �Է��Ͻÿ�. :");
			scanf_s("%d", &q);
			printf("\n");
			for (c = 0; c < q; c++)
			{
				printf(" ������ ������ ��ȣ�� �Է��Ͻÿ�. : ");
				scanf_s("%d", &r);
				printf("\n");

				printf(" ������ ������ �ݾ��� �Է��Ͻÿ�. : ");
				scanf_s("%d", &m2[r - 1].m);
				printf("\n\n");

				printf(" %s ������ �ݾ��� %d������ ����Ǿ����ϴ�.\n", m2[r - 1].n, m2[r - 1].m);
				printf("\n\n");
			}
		}
		printf("--------------------------------------\n\n");

		printf(" �����ϴ� ���� �ش��ϴ� ��ȣ�� �Է��Ͻÿ�.");

		for (c = 0; c < b; c++)
		{
			scanf_s("%d", &d);
			sum += m2[d - 1].m;
			printf("\n\n ����� ������ %s ������ ���� ������ %d�� �Դϴ�.\n", m2[d - 1].n, m2[d - 1].m);
		}
		printf("\n\n");
		printf(" �����Ͻ� ������ ���� �ݾ��� %d�� �Դϴ�.\n", sum);
	}

	// 3�г� ----------------------------------------------------------------------------------
	else if ((a == 3))
	{
		for (c = 0; c < sizeof(m3) / sizeof(menu); c++)
		{
			printf(" %d.%s(%s, %s ���ǻ�, %d��) ����: %d��\n", c + 1, m3[c].n, m3[c].n1, m3[c].n2, m3[c].y, m3[c].m);
			printf("\n");
		}
		printf("--------------------------------------\n\n");

		printf(" ���� ������ ���ϸ� 1, �׷��� ������ 2���� �Է��Ͻÿ� : ");
		scanf_s("%d", &p);
		printf("\n\n");

		if (p == 1)
		{
			printf(" ������ ���ϴ� ������ ������ �Է��Ͻÿ�. :");
			scanf_s("%d", &q);
			printf("\n");
			for (c = 0; c < q; c++)
			{
				printf(" ������ ������ ��ȣ�� �Է��Ͻÿ�. : ");
				scanf_s("%d", &r);
				printf("\n");

				printf(" ������ ������ �ݾ��� �Է��Ͻÿ�. : ");
				scanf_s("%d", &m3[r - 1].m);
				printf("\n\n");

				printf(" %s ������ �ݾ��� %d������ ����Ǿ����ϴ�.\n", m3[r - 1].n, m3[r - 1].m);
				printf("\n\n");
			}
		}
		printf("--------------------------------------\n\n");

		printf(" �����ϴ� ���� �ش��ϴ� ��ȣ�� �Է��Ͻÿ�.");

		for (c = 0; c < b; c++)
		{
			scanf_s("%d", &d);
			sum += m3[d - 1].m;
			printf("\n\n ����� ������ %s ������ ���� ������ %d�� �Դϴ�.\n", m3[d - 1].n, m3[d - 1].m);
		}
		printf("\n\n");
		printf(" �����Ͻ� ������ ���� �ݾ��� %d�� �Դϴ�.\n", sum);
	}

	// 4�г� ----------------------------------------------------------------------------------
	else if ((a == 4))
	{
		for (c = 0; c < sizeof(m4) / sizeof(menu); c++)
		{
			printf(" %d.%s(%s, %s ���ǻ�, %d��) ����: %d��\n", c + 1, m4[c].n, m4[c].n1, m4[c].n2, m4[c].y, m4[c].m);
			printf("\n");
		}
		printf("--------------------------------------\n\n");

		printf(" ���� ������ ���ϸ� 1, �׷��� ������ 2���� �Է��Ͻÿ� : ");
		scanf_s("%d", &p);
		printf("\n\n");

		if (p == 1)
		{
			printf(" ������ ���ϴ� ������ ������ �Է��Ͻÿ�. :");
			scanf_s("%d", &q);
			printf("\n");
			for (c = 0; c < q; c++)
			{
				printf(" ������ ������ ��ȣ�� �Է��Ͻÿ�. : ");
				scanf_s("%d", &r);
				printf("\n");

				printf(" ������ ������ �ݾ��� �Է��Ͻÿ�. : ");
				scanf_s("%d", &m4[r - 1].m);
				printf("\n\n");

				printf(" %s ������ �ݾ��� %d������ ����Ǿ����ϴ�.\n", m4[r - 1].n, m4[r - 1].m);
				printf("\n\n");
			}
		}
		printf("--------------------------------------\n\n");

		printf(" �����ϴ� ���� �ش��ϴ� ��ȣ�� �Է��Ͻÿ�.");

		for (c = 0; c < b; c++)
		{
			scanf_s("%d", &d);
			sum += m4[d - 1].m;
			printf("\n\n ����� ������ %s ������ ���� ������ %d�� �Դϴ�.\n", m4[d - 1].n, m4[d - 1].m);
		}
		printf("\n\n");
		printf(" �����Ͻ� ������ ���� �ݾ��� %d�� �Դϴ�.\n", sum);
	}
	else
		printf("�Է¿���! �ٽ� �Է��Ͻÿ�.\n");
}