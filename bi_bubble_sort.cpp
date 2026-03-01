#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//双向冒泡排序相比于一般的冒泡排序能减少不必要的循环次数，大大提升效率
//就是比如很小的数字排在最后面，只从前往后冒泡几乎每次循环都要遍历整个数组
void bi_bubble_sort(int q[], int n)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		bool flag = false;
		for (int i = left; i < right; i++)
		{
			if (q[i] > q[i + 1])
			{
				swap(q[i], q[i + 1]);
			    flag = true;
			}
		}
		right--;
		if (flag == false)
		{
			break;
		}
		flag = false;
		for (int i = right; i > left; i--)
		{
			if (q[i] < q[i - 1])
			{
				swap(q[i], q[i - 1]);
				flag = true;
			}
		}
		left++;
		if (flag == false)
		{
			break;
		}
	}
}