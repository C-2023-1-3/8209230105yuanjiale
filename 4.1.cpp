//单独拿出来一个数字，相当于垃圾桶，重复的数字都赋值为这个数字，
//输出的时候如果这个数组中的元素等于这个数字，那么便不会输出，
//如果输入了这个数字，那么只需要把这个数字输出一遍即可
#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int n,e=0;
	cout << "Enter/； ten numbers: ";
	for (int n = 0; n < 10; n++)
	{
		cin >> a[n];
		if (a[n] == -1000)
		{
			e = -1000;    
		}//单独拿出一个数字
		for (int i = 0; i < n; i++)
		{
		 if (a[n] == a[i])
			{
				a[n] = -1000;
			}
		}
	}//将与之前相同的数字翻进垃圾桶
	cout << "The distinct numbers are:";
	for (int n = 0; n < 10; n++)
	{
		if (a[n] !=-1000)
		{
			cout << a[n] << " ";
		}
	}//输出出现的数字
	if (e==-1000)
	{
		cout << e;
    }//输出作为垃圾桶的数字
	return 0;
}