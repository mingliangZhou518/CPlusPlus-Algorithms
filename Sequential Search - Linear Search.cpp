#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
//顺序查找就是从前往后依此比较每个数据是否等于目标数据
//时间复杂度为n
//平均查找长度average search length
//如果每个权重是等可能的，那么asl=(n+1)/2
int sequential_search(const vector<int>& arr, int target)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == target)
		{
			return i;//找到目标返回下标
		}
	}
	return -1;//未找到目标
}

//进阶版顺序查找
int plus_sequential_search(const vector<int>& arr, int target)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] == target)
		{
			return i + 1;//返回查找长度
		}
	}
	return arr.size() + 1;//未找到，返回长度n+1
}

//计算加权ASL
double caculateWeightASL(const vector<int>& arr, const vector<double>& probs)//probility
{
	//遍历每个元素，计算查找长度*每个查找长度对应概率的和
	double asl = 0.0;
	for (int i = 0; i < arr.size(); ++i)
	{
		int searchLength = i + 1;
		asl += searchLength * probs[i];
	}
	return asl;
}