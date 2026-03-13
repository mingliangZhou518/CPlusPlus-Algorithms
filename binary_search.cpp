#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
//必须是数组
//必须有序
int binary_search(const vector<int>& arr, int target)
{
	int left = 0, right = arr.size() - 1;
	while (left <= right)
	{
		int mid = left + right >> 1;
		if (arr[mid] == target)
		{
			return mid;//找到目标，返回下标
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;//未找到目标
}

