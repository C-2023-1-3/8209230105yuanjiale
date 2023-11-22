#include<iostream>
using namespace std;


int main()
{
	float h, r, V;//定义圆锥的底面半径，高和体积
	cout << "请输入圆锥的底面半径(m)";
	cin >> r;
	cout << "请输入圆锥的高(m)";
	cin >> h;
	float pi = 3.14;//使用标识符常量定义圆周率
	V = (pi * r * r * h) / 3;//体积公式计算圆锥体积
	cout << "这个圆锥的体积为" << V << "m^3" << endl;
	return 0;
}
