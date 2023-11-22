#include<iostream>
using namespace std;

int main()
{
	cout << "请输入自变量的值，定义域为（0，10）";
	float x;
	float y;
    cin >> x;
	if (x > 0)
	{
		if (x < 1)
		{
			y = 3 - 2*x;
		}//第一段函数表达式
		else if (x < 5)
		{
			y = 2 / (4 * x) + 1;
		}//第二段函数表达式
		else if (x < 10)
		{
			y = x * x;
		}//第三段函数表达式
		else
		{
			cout << "所输入x的值不在定义域内" << endl;
		}//输入的自变量不符合定义域的情况



	}
	else
	{
		cout << "所输入x的值不在定义域内" << endl;
	}//输入的自变量不符合定义域的情况

	cout << "y的取值为" << y << endl;
    return 0;
}