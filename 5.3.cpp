#include<iostream>
using namespace std;
class cuboid 
{
private:
	float length, width, height,V;
public:
	void setCuboid()//用成员函数输入长方柱的长宽高
	{
		cout << "请输入长方柱的长：";
		cin >> length;
		cout << "请输入长方柱的宽：";
		cin >> width;
		cout << "请输入长方柱的高：";
		cin >> height;
	}
	void volume() //用成员函数计算长方柱的体积
	{
		V = length * width * height;
	}
	void showVolume()//用成员函数输出3个长方柱的体积
	{
		cout <<V<< endl;
	}
};
int main()
{
	cuboid c1, c2, c3;
	cout << "请分别输入三个长方柱的长，宽，高：" << endl;//调用成员函数分别输入长宽高
	c1.setCuboid();
	c2.setCuboid();
	c3.setCuboid();
	cout << "第一个长方柱体积为：" ;
	c1.volume();
	c1.showVolume();
	cout << "第二个长方柱体积为：" ;
	c2.volume();
	c2.showVolume();
	cout << "第三个长方柱体积为：" ;
	c3.volume();
	c3.showVolume();
	return 0;
}