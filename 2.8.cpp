#include<iostream>
using namespace std;

int main()
{
	double xn, xn1, a;
	cout << "������һ�����֣�";
	cin >> a;
	for (xn=a;1;xn=xn1)
	{
		if (a == 0)
		{
			cout << "�����ֵ�ƽ����Ϊ��0" << endl;//����0�޷����������ʽ���ʵ�����0�Ľ���г���
			break;
		}
		if (a < 0)
		{
			cout << "�����������Ϊ�������޷�����ƽ��������"<<endl;//��aΪ����ʱ������û��ƽ�������������޳�
			break;
		}
		xn1 =(xn + a / xn) / 2;
		if (xn1-xn <1e-100&&xn1-xn>-1e-100)
		{
			cout <<"�����ֵ�ƽ����Ϊ��"<< xn1 << endl;//ƽ����������ʽ���ƽ����
			break;
		}
	}
     return 0;
}