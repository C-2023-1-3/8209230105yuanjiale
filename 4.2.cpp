#include<iostream>
using namespace std;

double swap(double& a, double& b)//��������
{
	double t = a;
	a = b;
	b = t;
	return 0;
}
double bubble(double list[10])//����������
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j<10-1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	return 1.1;
}
int main()
{
	cout << "������һ������10��˫�������ֵ�����:";
	double list[10];
	for (int n = 0; n < 10; n++)
	{
		cin >> list[n];
	}
	bubble (list);
	cout << "��������������Ϊ��";
	for (int n = 0; n < 10; n++)
	{
		cout<< list[n]<<"  ";
	}//�������ֲ���ʾ


	return 0;
}