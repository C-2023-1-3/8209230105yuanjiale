#include<iostream>
using namespace std;
class cuboid 
{
private:
	float length, width, height,V;
public:
	void setCuboid()//�ó�Ա�������볤�����ĳ����
	{
		cout << "�����볤�����ĳ���";
		cin >> length;
		cout << "�����볤�����Ŀ�";
		cin >> width;
		cout << "�����볤�����ĸߣ�";
		cin >> height;
	}
	void volume() //�ó�Ա�������㳤���������
	{
		V = length * width * height;
	}
	void showVolume()//�ó�Ա�������3�������������
	{
		cout <<V<< endl;
	}
};
int main()
{
	cuboid c1, c2, c3;
	cout << "��ֱ����������������ĳ������ߣ�" << endl;//���ó�Ա�����ֱ����볤���
	c1.setCuboid();
	c2.setCuboid();
	c3.setCuboid();
	cout << "��һ�����������Ϊ��" ;
	c1.volume();
	c1.showVolume();
	cout << "�ڶ������������Ϊ��" ;
	c2.volume();
	c2.showVolume();
	cout << "���������������Ϊ��" ;
	c3.volume();
	c3.showVolume();
	return 0;
}