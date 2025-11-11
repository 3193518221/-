#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int efcz(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
			}
	}
	return -1;
}



int main()
{
	int n = 0, k = 0;
	int arr[100] = {0};
	int i = 0;
	
	scanf("%d", &n);
	int sz = n;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &k);
	int ret = efcz(arr, k, sz);
		 if (ret == -1)
		 {
			 printf("没有找到\n");
	}
		 else
		 {
			 printf("找到了，下标是%d\n", ret);
		 }



	return 0;
}