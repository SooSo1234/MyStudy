#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	printf("�迭�� ũ�� �Է� ��\n");
	scanf_s("%d", &n);

	int* mynumbers = (int*)malloc(sizeof(int) * n);
	printf("���ڸ� %d�� �Է���\n", n);
	
	for (int i = 0; i < n; i++)
		scanf_s("%d", &mynumbers[i]);
	
	for (int i = 0; i < n; i++)
		printf("%d\n", mynumbers[i]);
	
	free(mynumbers);

	return 0;


}