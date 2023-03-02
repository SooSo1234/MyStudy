#include<stdio.h>
int main()
{
	int h, m;
	int t;
	scanf_s("%d %d", &h, & m);
	scanf_s("%d", &t);
	h = (h + ((m + t) / 60))%24;
	m = (m + t) % 60;
	printf("%d %d", h, m);

	return 0;
}