#include<stdio.h>
int main()
{
	//AND : &&
	// OR : ||
	//XOR : ^
	
	//AND
	int age;
	printf("몇살?\n");
	scanf_S("%d", &age);
	age > 0 && age < 200 ? printf("나이:%d\n", age) : printf("X\n");

	// OR
	age <= 0 || age >= 200 ? printf("X\n") | printf("나이:%d\n", age);





	return 0;
}