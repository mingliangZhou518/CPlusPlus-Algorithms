#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//冒泡排序改进版
void bubble_sort(int q[], int n)
{
	for (int i = 0; i < n - 1; i++)//表示循环了n-1轮
	{
		bool flag = false;//如果不发生交换代表已经有序，及时停止循环增加运行效率
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (q[j] > q[j + 1])
			{
				swap(q[j], q[j + 1]);
				flag = true;
			}
		}
		if (flag == false)
		{
			break;
		}
	}
}