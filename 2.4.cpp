#include<iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	char sign;
	cout << "�������һ�����֣�";
	cin >> num1;
	cout << "����Ӽ��˳���ȡ�����㷨����ţ�";
	cin >> sign;
	cout << "������ڶ������֣�";
	cin >> num2;                                   //����������
	
	if (sign ==43)
	{
		cout <<"������Ϊ" << num1 + num2 << endl;//�ӷ�����
	}
	else if (sign ==45)
	{
		cout << "������Ϊ" << num1 - num2 << endl;//��������
	}
	else if (sign == 42)
	{
		cout << "������Ϊ" << num1 * num2 << endl;//�˷�����
	}
	else if (sign == 47)
	{
		cout << "������Ϊ" << num1 / num2 << endl;//��������
	}
	else if (sign == 37)
	{
		cout << "������Ϊ" << num1 % num2 << endl;//ȡ������
	}
	else
	{
		cout << "���������������Ϸ�" << endl;//��������Ϸ������
	}
    return 0;
}