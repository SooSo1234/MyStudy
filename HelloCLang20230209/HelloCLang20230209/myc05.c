#include<stdio.h>
int main()
{
	//AND : &&
	// OR : ||
	//XOR : ^
	
	//AND
	int age;
	printf("���?\n");
	scanf_S("%d", &age);
	age > 0 && age < 200 ? printf("����:%d\n", age) : printf("X\n");

	// OR
	age <= 0 || age >= 200 ? printf("X\n") | printf("����:%d\n", age);





	return 0;
}