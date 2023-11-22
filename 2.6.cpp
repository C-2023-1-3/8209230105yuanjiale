#include<iostream>
using namespace std;

int main()
{
	cout << "请输入两个正整数：" << endl;
	int a, b;
	cin >> a >> b;
	if ((a < 0 || b < 0))
	{
		cout << "您输入的数值不是正整数" << endl;
	}//确保输入的两个数字是正整数
	int n = 1;
	for ( n = min(a,b);(a>0||b>0) ; n--)
	{
		if (a % n == 0 && b % n == 0)
		{
			cout << "最大公约数为：" << n << endl;
			break;
		}

	}//找最大公约数
	for(n=max(a,b); (a > 0 || b > 0);n++)
	{
		if (n % a == 0 && n % b == 0)
		{
			cout << "最小公倍数为：" << n << endl;
			break;
		}

	}//找最小公倍数

     return 0;
}