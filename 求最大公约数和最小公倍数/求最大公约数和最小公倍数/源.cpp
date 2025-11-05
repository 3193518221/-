#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, t, i, n;
	int num1, num2;
	printf("请输入两个数\n");
	scanf("%d %d", &a, &b);
	num1 = a;
	num2 = b;
	while (num2 != 0)
	{
		t = num2;
		b = a % b;
		a = t;
	}
	printf("最大公约数为%d", a);
	printf("最小公倍数为%d", num1 * num2 / a);








	return 0;
}