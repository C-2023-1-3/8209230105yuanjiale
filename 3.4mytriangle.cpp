#include<iostream>
#include<cmath>
using namespace std;
//定义函数
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		return 1;
	}
	else
	{
		cout << "无法构成三角形";
		return 0;
	}
}
double _area(double side1, double side2, double side3)
{
	double s, area;
	s = (side1 + side2 + side3) / 2;
	area = s * (s - side1) * (s - side2) * (s - side3);
	cout << "该三角形的面积为：" << sqrt(area) << endl;
	return 1;
}