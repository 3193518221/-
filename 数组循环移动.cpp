#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include<math.h>
void diaohuan(int arr[], int l,int r)
{
	int i, j;
	int temp = 0;
	for (i = l, j = r;i < j;i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
void func(int arr[], int p, int n)
{
	diaohuan(arr, 0, p - 1);
	diaohuan(arr, p, n-1);
	diaohuan(arr, 0, n - 1);
}
int main()
{
	int arr[100];
	int n, p;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	func(arr, p, n);
	for (int i = 0;i < n;i++)
	{
		printf("%d", arr[i]);
	}
}