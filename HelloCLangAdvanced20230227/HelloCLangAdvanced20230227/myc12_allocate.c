#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	printf("배열의 크기 입력 해\n");
	scanf_s("%d", &n);

	int* mynumbers = (int*)malloc(sizeof(int) * n);
	printf("숫자를 %d개 입력해\n", n);
	
	for (int i = 0; i < n; i++)
		scanf_s("%d", &mynumbers[i]);
	
	for (int i = 0; i < n; i++)
		printf("%d\n", mynumbers[i]);
	
	free(mynumbers);

	return 0;


}