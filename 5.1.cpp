#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void setTime()//在类体内定义成员函数
	{
		cout << "请输入设定的小时：";
		cin >> hour;
		cout << "请输入设定的分钟：";
		cin >> minute;
		cout << "请输入设定的秒：";
		cin >> sec;
	}
	void showTime()
	{
		cout << "设定的时间为：" << hour << ":" << minute << ":" << sec << endl;
	}
private:             // 将数据成员改为私有的
    int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;       //定义t1为Time类对象
	t1.setTime();//输入功能用成员函数实现
	t1.showTime();//输出功能用成员函数实现
	return 0;
}
