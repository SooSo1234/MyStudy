#include<stdio.h>
#include<string.h>
int main()
{
    char num1[4] = { NULL };
    char num2[4] = { NULL };
    char buff[4] = { NULL };

    scanf("%s %s", num1, num2);
    for (int i = 0; num1[i]!=NULL; i++)
    {
        buff[2 - i] = num1[i];
    }
    for (int i = 0; buff[i]!=NULL; i++)
    {
        num1[i]= buff[i];
    }
    for (int i = 0; num2[i] != NULL; i++)
    {
        buff[2 - i] = num2[i];
    }
    for (int i = 0; buff[i] != NULL; i++)
    {
        num2[i] = buff[i];
    }
    if (atoi(num1) > atoi(num2))
        printf("%s\n", num1);
    else
        printf("%s\n", num2);

    return 0;
}