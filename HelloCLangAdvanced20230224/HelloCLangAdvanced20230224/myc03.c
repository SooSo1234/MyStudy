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
	printf("2차원이나 그 이상 배열의 사이즈를 구하는 방법\n");
	printf("%d %d\n", sizeof(gugu) / sizeof(gugu[0]), sizeof(gugu[0]) / sizeof(gugu[0][0]));
	printf("2차원배열의 전체 크기, 2차원 배열의 1차원 배열 한 개의 크기, 한 칸의 크기\n");
	printf("%d %d %d\n", sizeof(gugu), sizeof(gugu[0]), sizeof(gugu[0][0]));

	int row = sizeof(gugu) / sizeof(gugu[0]);
	int col = sizeof(gugu[0]) / sizeof(gugu[0][0]);
	printf("행 = %d,\t열 = %d\n", row, col);


	return 0;
}