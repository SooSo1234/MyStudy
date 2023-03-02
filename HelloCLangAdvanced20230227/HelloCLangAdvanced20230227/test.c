#include<stdio.h>
int main()
{
	int t = time(NULL);
	int swit = 0;
	int a;
	while (scanf_s("%d",&a)==NULL)
	{
		if (time(NULL) % 2 == 0)
		{
			system("color 12");
		}
		else
			system("color 21");
	}




	return 0;
}