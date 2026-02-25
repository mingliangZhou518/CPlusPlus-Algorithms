#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void insert_sort(int q[], int n)
{
	for (int i = 1; i < n; i++)//从第二个数开始往前比较插入
	{
		if (q[i] < q[i - 1])
		{
			int temp = q[i];//比前一个数字小，拎出来准备前插
			int j = i - 1;//因为类似二次遍历，所以引入j
			while (j >= 0 && q[j] > temp)
			{
				q[j + 1] = q[j];
				j--;
			}
			q[j+1] = temp;
		}
	}
}