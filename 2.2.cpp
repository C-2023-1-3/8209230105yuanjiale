#include<iostream>
using namespace std;

int main()
{
	cout << "�������Ա�����ֵ��������Ϊ��0��10��";
	float x;
	float y;
    cin >> x;
	if (x > 0)
	{
		if (x < 1)
		{
			y = 3 - 2*x;
		}//��һ�κ������ʽ
		else if (x < 5)
		{
			y = 2 / (4 * x) + 1;
		}//�ڶ��κ������ʽ
		else if (x < 10)
		{
			y = x * x;
		}//�����κ������ʽ
		else
		{
			cout << "������x��ֵ���ڶ�������" << endl;
		}//������Ա��������϶���������



	}
	else
	{
		cout << "������x��ֵ���ڶ�������" << endl;
	}//������Ա��������϶���������

	cout << "y��ȡֵΪ" << y << endl;
    return 0;
}