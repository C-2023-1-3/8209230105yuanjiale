#include<iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	char sign;
	cout << "请输入第一个数字：";
	cin >> num1;
	cout << "请输加减乘除或取余运算法则符号：";
	cin >> sign;
	cout << "请输入第二个数字：";
	cin >> num2;                                   //操作计算器
	
	if (sign ==43)
	{
		cout <<"运算结果为" << num1 + num2 << endl;//加法运算
	}
	else if (sign ==45)
	{
		cout << "运算结果为" << num1 - num2 << endl;//减法运算
	}
	else if (sign == 42)
	{
		cout << "运算结果为" << num1 * num2 << endl;//乘法运算
	}
	else if (sign == 47)
	{
		cout << "运算结果为" << num1 / num2 << endl;//除法运算
	}
	else if (sign == 37)
	{
		cout << "运算结果为" << num1 % num2 << endl;//取余运算
	}
	else
	{
		cout << "您输入的运算符不合法" << endl;//运算符不合法的情况
	}
    return 0;
}