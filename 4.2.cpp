#include<iostream>
using namespace std;

double swap(double& a, double& b)//交换函数
{
	double t = a;
	a = b;
	b = t;
	return 0;
}
double bubble(double list[10])//起泡排序函数
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j<10-1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	return 1.1;
}
int main()
{
	cout << "请输入一个含有10个双精度数字的数组:";
	double list[10];
	for (int n = 0; n < 10; n++)
	{
		cin >> list[n];
	}
	bubble (list);
	cout << "该数组升序排列为：";
	for (int n = 0; n < 10; n++)
	{
		cout<< list[n]<<"  ";
	}//排列数字并显示


	return 0;
}