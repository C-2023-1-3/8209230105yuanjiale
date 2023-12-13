#include<iostream>
using namespace std;
bool is_prime(int num);//声名判断素数的函数
int main()
{
	cout << "请输入一个整数：";
	int a ;
	cin >> a;
	if (is_prime(a) == 1)
	{
		cout << "是素数"<<endl;
	}
	else
	{
		cout << "不是素数"<<endl;
	}//判断并输出是否为素数
    cout << "前两百个素数为：" << endl;
	int b = 2;
	for (int m = 1; m <= 200; m++,b++)
	{
		for (;; b++)
		{
			if (is_prime(b) == 1)
			{

				cout << b<<'\t';
				break;
			}
		}
		if (m % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}//寻找前200个素数
bool is_prime(int num)//定义判断素数的函数
{
	int n = 0;
	for (n = num - 1; n > 0; n--)
	{
		if (num % n == 0)
		{
			break;
		}
	}
	if (n == 1)
	{
		return 1;//返回为真
	}
	else
	{
		return 0;//返回为假
	}
}
