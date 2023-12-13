#include<iostream>
#include"mytriangle.h"//引用头文件
using namespace std;

int main()
{
	cout << "请输入三角形的三条边长：";
	int a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1)
	{
		_area(a, b, c);//引用函数
	}
	return 0;
}