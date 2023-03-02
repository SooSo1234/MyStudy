
#include<stdio.h>
#include<stdbool.h>
	int main()
	{
		char numbers[100];
		int i = 0;
		int isnum = true;
		while (1)
		{
			char c = getchar();
			rewind(stdin);
			if (c == '-')
				isnum = false;
				break;
			if (c == '\n')
				continue;
			if (c < '0' || c>'9')
			{
				printf("again!\n");
				continue;
			}
			*(numbers +i) = c;
			i++;
		}
		isnum = true;
		*(numbers+i) = NULL;

		printf("%s\n", numbers);

	return 0;
}