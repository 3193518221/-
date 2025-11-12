#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int fun(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n > 2)
		return fun(n - 1) + fun(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fun(n));
	return 0;
}