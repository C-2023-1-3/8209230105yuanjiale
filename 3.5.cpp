#include<iostream>
using namespace std;

int day(int& n,int& sum)
{
	sum = (sum + 1) * 2;
	n++;
	if (n < 10)
	{
		day(n, sum);//利用递归实现计算出猴子第一天共摘桃子数目
	}
   return 0;
}
int main()
{
	int sum = 1;
	int n = 1;
	day(n, sum);
    cout << "第一天猴子共摘：" << sum << endl;//调用函数输出结果
    return 0;
}