#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%u ", n % 10);
}
int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	print(n);
	return 0;
}