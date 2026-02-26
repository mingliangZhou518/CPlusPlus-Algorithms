#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void binary_insert_sort(int q[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (q[i] < q[i - 1])//比前一个数字小的才需要插入
		{
			int l = 0, r = i - 1,temp=q[i];
			while (l <= r)
			{
				//开始折半
				int mid = l + r >> 1;
				if (temp < q[mid])
				{
					r = mid - 1;
				}
				else
				{
					l = mid + 1;
				}
			}
			//元素后移给要插入的元素腾出位置
			//倒序后移防止覆盖
			for (int j = i - 1; j >= l; j--)
			{
				q[j + 1] = q[j];
			}
			//插入需要的元素
			q[l] = temp;
		}
	}
}