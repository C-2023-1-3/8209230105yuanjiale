#include<iostream>
using namespace std;


int main()
{
	float a, b, c,C;
	cout << "�����������ε������߳�(m)��" << endl;;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a && b - a < c && c - a < b && c - b < a)
	{//�����ж�������������ܷ񹹳�������
		C = a + b + c;
		cout << "�������ε��ܳ�Ϊ(m)��" << C << endl;//�����������ܳ�
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}//�ж��Ƿ�Ϊ����������
	}
	else
	{
		cout << "��������������޷�����������" << endl;
	}//������������޷����������ε����
    return 0;
}