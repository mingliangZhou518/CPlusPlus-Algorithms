#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
//确定分界点，left,right,mid,rand
//调整区间
//递归处理左右两端
const int N = 1e6 + 10;
int n;
int q[N];
void quick_sort(int q[], int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int x = q[l], i = l - 1, j = r + 1;
	while (i < j)
	{
		do { i++; } while (q[i] < x);
		do { j--; } while (q[j] > x);
		if (i < j) { swap(q[i], q[j]); }
	}//单次实现了j左边的包括本身都是小于等于x的数，j右边的不包括本身都是>x的数
	//接下来就是递归操作
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}
int main()
{
	printf("请输入数组的长度：\n");
	scanf("%d", &n);//确定数组元素个数
	printf("请输入数组的元素：\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &q[i]);
	}
	quick_sort(q, 0, n-1);
	printf("数组的遍历结果是：\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", q[i]);
	}
	

	return 0;
}
