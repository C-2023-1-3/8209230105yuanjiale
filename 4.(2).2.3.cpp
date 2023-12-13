#include<iostream>
using namespace std;
int swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
	return 0;
}//交换函数
int bubble(int* list,int size)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	return 1;
}//排序函数
int main()
{
	int n;
	cout << "请输入数组元素个数：";
    cin >> n;
	int* arr = new int[n];
	cout << "请输入一个数组：";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}//建立动态数组并输入数组元素个数和数组元素
	bubble(arr,n);
	cout << "排序后的结果为：";
	for (int i = 0; i < n; i++)
	{
		cout<<*(arr+i)<<"  ";
	}//用指针的方式输出数组元素
	delete[]arr;//释放数组内存

	return 0;
}