#include<stdio.h>
int main()
{
	//������
	printf("%d\n", 7 & 8);
	printf("%d\n", 7 | 8);
	printf("%d\n", 9 ^ 8);

	//��Ʈ����
	printf("%d\n", 8 >> 2);//2	�ڿ� 0 2�� ����
	printf("%d\n", 8 << 2);//32	�ڿ� 0 2�� ����

	//��������
	
	int a = 10;
	a++;
	printf("a=%d\n", a);
	//printf("%d\n", ++a );
	printf("%d\n", ++a + a++ );
	printf("%d\n", a);

	printf("%d\n", --a);
	printf("%d\n", a--);
	printf("%d\n", a);

	return 0;
}