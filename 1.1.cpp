#include<iostream>
using namespace std;
int main()
{
	int k = 1;//变量赋初值才可以使用，故给k赋值为1
	int i = k + 1;
	cout << ++i<< endl;//i++为运行完这一行代码再加一，++i则是在运行时就已经加一了
	i = 1;//不可重复定义一个变量，故将int删除
	cout << ++i<< endl;//i++为运行完这一行代码再加一，++i则是在运行时就已经加一了
	cout << "Welcome to C++" << endl;
	return 0;
}
