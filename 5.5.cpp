#include<iostream>
using namespace std;
class Point//设有一描述坐标点的类Point
{
private:
	int x;//私有变量x和y代表一个点的(x,y)坐标值
	int y;
public:
	Point() {//利用构造函数传递参数，在定义对象时将x、y坐标值初始化为（60,80）
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)//利用公有成员函数void setPoint(int i, int j)将坐标值修改为(60+i,80+j)
	{
		x += i;
		y += j;
	}
	void display()//利用公有成员函数display()输出修改后的坐标值
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p;
	p.display();//验证构造函数是否发挥作用
	p.setPoint(5, 6);//验证公有成员函数void setPoint是否发挥作用
	p.display();//验证公有成员函数display是否发挥作用
	return 0;
}