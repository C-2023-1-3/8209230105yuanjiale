#include<iostream>
#include"mytriangle.h"//����ͷ�ļ�
using namespace std;

int main()
{
	cout << "�����������ε������߳���";
	int a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1)
	{
		_area(a, b, c);//���ú���
	}
	return 0;
}