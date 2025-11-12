#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}
void hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);

	}
	else
	{
		hanoi(n - 1, pos1, pos3, pos2);
		move(pos1,pos3);
		hanoi(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	char pos1 = 'A', pos2 = 'B', pos3 = 'C';
	hanoi(3, pos1, pos2, pos3);
	return 0;
}