#include<stdio.h>
#include<string.h>
int main()
{
	char class[100] = { NULL };
	char score[4] = { NULL };
	char grade[3] = { NULL };
	double gradenum;
	double aver;
	double sum = 0;
	int count = 0;
	while (scanf("%s", &class) != EOF)
	{
		scanf("%s", &score);
		scanf("%s", &grade);
		
		if (grade[0] == 'P')
			continue;
		else if (grade[0] == 'A')
		{
			if (grade[1] == '+')
				gradenum = 4.5;
			else
				gradenum = 4.0;
		}
		else if (grade[0] == 'B')
		{
			if (grade[1] == '+')
				gradenum = 3.5;
			else
				gradenum = 3.0;
		}
		else if (grade[0] == 'C')
		{
			if (grade[1] == '+')
				gradenum = 2.5;
			else
				gradenum = 2.0;
		}
		else if (grade[0] == 'D')
		{
			if (grade[1] == '+')
				gradenum = 1.5;
			else
				gradenum = 1.0;
		}
		else
			gradenum = 0;
		sum = gradenum * (score[0] - '0');
		count++;
	}
	printf("%.4f", sum / count);



	return 0;
}