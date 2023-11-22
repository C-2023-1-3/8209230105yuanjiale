#include<iostream>
using namespace std;

int main()
{
	char letter;
	cout << "请输入一个大写或小写字母：";
	cin >> letter;
	if (letter < 97)
	{
		letter += 1;
		cout<<"它的十进制后继ASK2码为:" << int(letter) << endl;//将大写字母转化为后继ASK2码值
	}
	if (letter > 96)
	{
		letter-=32;
		cout <<"它的大写字母为："<< letter << endl;//将小写字母转化为大写字母
	}
	return  0;
}