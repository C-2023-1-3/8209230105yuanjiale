#include<iostream>
using namespace std;
class Point//����һ������������Point
{
private:
	int x;//˽�б���x��y����һ�����(x,y)����ֵ
	int y;
public:
	Point() {//���ù��캯�����ݲ������ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60,80��
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)//���ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60+i,80+j)
	{
		x += i;
		y += j;
	}
	void display()//���ù��г�Ա����display()����޸ĺ������ֵ
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p;
	p.display();//��֤���캯���Ƿ񷢻�����
	p.setPoint(5, 6);//��֤���г�Ա����void setPoint�Ƿ񷢻�����
	p.display();//��֤���г�Ա����display�Ƿ񷢻�����
	return 0;
}