#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//总体的思想就是比较n-1轮，从每轮的后面一个数字与该轮第一个数字比较大小，找到该轮数组中最小的数的索引
void simple_selection_sort(int q[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;//用k记录当前轮第一个数的索引
		for (int j = i + 1; j < n; i++)
		{
			if (q[k] > q[j])
			{
				k == j;//找到当轮最小数据的索引
			}
		}
		swap(q[i], q[k]);//把最小的放在当前轮的第一位
	}
}