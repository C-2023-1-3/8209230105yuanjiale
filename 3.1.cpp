#include<iostream>
using namespace std;

int maxgys(int& a, int& b,int& n)
{
	 n = 1;
	for (n = min(a, b); (a > 0 || b > 0); n--)
	{
		if ((a == 0 || b == 0))
		{
			break;
		}
		if (a % n == 0 && b % n == 0)
		{
			break;
		}
		

	}//找最大公约数
     
	return 0;
}

int maxandmin(int& a, int& b,int& n)//在函数中找最大公约数和最小公倍数
{
	for (n = max(a, b); (a > 0 || b > 0); n++)
	{
		if ((a == 0 || b == 0))
		{
			break;
		}
		if (n % a == 0 && n % b == 0)
		{
			
			break;
		}

	}//找最小公倍数

	return 0;
}

int main()
{
	cout << "请输入两个自然数：" ;
	int m, n, x;
	cin >> m >> n;
	maxgys(m, n, x);
    if ((m< 0 || n < 0))
	{
		cout << "您输入的数值不是正整数" << endl;
	}//输出两个数字不为自然数的情况
	else
	{
		cout << "最大公约数为：" << x << endl;
	}//输出大公约数
	maxandmin(m, n, x);
	if ((m == 0 || n == 0))
	{
		cout << "两个数没有最小公倍数" << endl;
	}
	else if (x % m == 0 && x % n == 0)
	{
		cout << "最小公倍数为：" << x << endl;
	
	}//输出最小公倍数
	return 0;
}