#include<stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	printf("�� 2���� �Է��Ͻÿ�\n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);







	return 0;
}