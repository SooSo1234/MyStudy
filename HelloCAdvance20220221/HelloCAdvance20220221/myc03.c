#include<stdio.h>
int main()
{
	char message[100];
	printf("문장을 입력해.\n");
	scanf("%s", message);
	printf("%s\n", message);
	
	while (getchar() != '\n');

	fgets(message, sizeof(message), stdin);
	printf("%s\n", message);


	return 0;
}