#include<stdio.h>
int main()
{
	int inputSugar;
	printf("º≥≈¡ ∏Ó kg?\n");
	scanf_s("%d", &inputSugar);
	int pack = 0;
	for (;;)
	{
		if (inputSugar % 5 == 0)
		{
			pack += inputSugar / 5;
			printf("%dπ≠¿Ω\n", pack);
			break;
		}
		inputSugar -= 3;
		pack++;
		if (inputSugar < 0)
		{
			printf("-1\n");
			break;
		}
	}






	return 0;
}