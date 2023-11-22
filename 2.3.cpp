#include<iostream>
using namespace std;


int main()
{
	float a, b, c,C;
	cout << "请输入三角形的三个边长(m)：" << endl;;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a && b - a < c && c - a < b && c - b < a)
	{//首先判断输入的三条边能否构成三角形
		C = a + b + c;
		cout << "该三角形的周长为(m)：" << C << endl;//计算三角形周长
		if (a == b || a == c || b == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}//判断是否为等腰三角形
	}
	else
	{
		cout << "您输入的三条边无法构成三角形" << endl;
	}//输入的三条边无法构成三角形的情况
    return 0;
}