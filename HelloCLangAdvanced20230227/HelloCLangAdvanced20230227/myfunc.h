#pragma once

#include<stdio.h>
int sum(int a, int b, int c)
{
	int sum = 0;
	for (int i = a; i < b; i += c)
		sum += i;
	return sum;
}