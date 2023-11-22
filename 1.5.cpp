#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float C,F;//定义摄氏度和华氏度
	cout << "请输入华氏度：" ;
	cin >> F;
	C = (F - 32)/1.8;//摄氏度和华氏度的转化公式
	cout<<fixed <<"对应的摄氏度为："<<setprecision(2)<< C << endl;//保留两位小数输出
	return 0;
}