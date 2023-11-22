#include<iostream>
using namespace std;

int main()
{
	double xn, xn1, a;
	cout << "请输入一个数字：";
	cin >> a;
	for (xn=a;1;xn=xn1)
	{
		if (a == 0)
		{
			cout << "该数字的平方根为：0" << endl;//由于0无法带入迭代公式，故单独把0的结果列出来
			break;
		}
		if (a < 0)
		{
			cout << "您输入的数字为负数，无法进行平方根运算"<<endl;//当a为负数时，负数没有平方根，将负数剔除
			break;
		}
		xn1 =(xn + a / xn) / 2;
		if (xn1-xn <1e-100&&xn1-xn>-1e-100)
		{
			cout <<"该数字的平方根为："<< xn1 << endl;//平方根迭代公式求出平方根
			break;
		}
	}
     return 0;
}