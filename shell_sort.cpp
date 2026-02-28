//希尔排序相对于插入排序的优点
//数据基本有序时，效率较高
//数据量较小时效率较高
//希尔排序就是通过不断缩小增量，通过块插入排序的方式，每轮下来数组整体都变得更加有序
//希尔排序又叫做缩小增量排序
//通过把一大长串的数组通过增量拆成块，刚开始每个块内的元素少，所以插入排序效率高
//每轮排序都使得整体变得更有序，插入排序变有序
//希尔排序复杂度不稳定
//增量一开始取长度的一半，每次折半直到增量为1
//希尔排序的平均时间复杂度约O(n^1.3)（远优于插入排序的O(n²)），最坏情况仍为O(n²)（增量选 n/2 时）
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void shell_sort(int q[], int n)
{
	for (int d = n / 2; d >= 1; d/=2)
	{
		for (int i = d; i < n; i++)
		{
			if (q[i] < q[i - d])
			{
				int temp = q[i];
				int j = i - d;
				while (j >= 0 && q[j] > temp)
				{
					q[j + d] = q[j];
					j -= d;
				}
				q[j+d] = temp;
			}
		}
	}
}
