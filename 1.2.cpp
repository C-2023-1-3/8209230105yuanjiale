#include<iostream>
using namespace std;


int main()
{
	float h, r, V;//����Բ׶�ĵ���뾶���ߺ����
	cout << "������Բ׶�ĵ���뾶(m)";
	cin >> r;
	cout << "������Բ׶�ĸ�(m)";
	cin >> h;
	float pi = 3.14;//ʹ�ñ�ʶ����������Բ����
	V = (pi * r * r * h) / 3;//�����ʽ����Բ׶���
	cout << "���Բ׶�����Ϊ" << V << "m^3" << endl;
	return 0;
}
