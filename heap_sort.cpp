#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//前提：完全二叉树
//大根堆：任意节点大于其左右孩子
//小根堆：任意节点小于其左右孩子
//建堆（0n）：从第一个非叶节点依次往下调整
//排序（nlogn）：依次找到堆顶锁定最大数字(二叉树向下是logn,n-1轮)，不稳定
//不稳定意思是两个相同的数据，排序后可能会改变两者的前后位置
void down_adjust(int q[], int k, int n)
{
	int i = k, j = i * 2;
	while (j <= n)//最多调整到叶节点位置
	{
		if (j + 1 <= n && q[j + 1] > q[j])//如果存在兄弟节点，则比较和兄弟节点的大小关系
		{
			j++;//把索引更新到兄弟节点
		}
		if (q[i] < q[j])
		{
			swap(q[i], q[j]);
			i = j;
			j = i * 2;//向下
		}
		else
		{
			break;//整体的堆稳定，一旦比较出大于孩子节点，下面觉没必要比了
		}

	}
}
void heap_sort(int q[], int n)
{
	//建立堆
	for (int i = n / 2; i >= 1; i--)//n/2位置就是第一个非叶节点位置
	{
		down_adjust(q, i, n);
	}
	//排序
	for (int i = n; i >= 2; i--)//只剩最后一个数默认成最小，不需要再排
	{
		swap(q[1], q[i]);//挨个找出最大的数,挖去最后一个数
		down_adjust(q, 1, i - 1);
	}
		
}