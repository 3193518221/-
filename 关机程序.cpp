#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char str[20];
	system("shutdown -s -t 60");
	printf("电脑将在60秒后关闭，如需取消请运行命令:我是猪\n");
	scanf("%s", str);
	if(strcmp(str, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("已取消关闭电脑操作\n");
	}
	else
	{
		printf("输入错误，电脑将在60秒后关闭\n");
	}
}