#include<stdio.h>
int main()
{
	int gugu[8][9];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			gugu[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
			printf("%d\t", gugu[i][j]);
		puts("");
	}
	printf("2�����̳� �� �̻� �迭�� ����� ���ϴ� ���\n");
	printf("%d %d\n", sizeof(gugu) / sizeof(gugu[0]), sizeof(gugu[0]) / sizeof(gugu[0][0]));
	printf("2�����迭�� ��ü ũ��, 2���� �迭�� 1���� �迭 �� ���� ũ��, �� ĭ�� ũ��\n");
	printf("%d %d %d\n", sizeof(gugu), sizeof(gugu[0]), sizeof(gugu[0][0]));

	int row = sizeof(gugu) / sizeof(gugu[0]);
	int col = sizeof(gugu[0]) / sizeof(gugu[0][0]);
	printf("�� = %d,\t�� = %d\n", row, col);


	return 0;
}