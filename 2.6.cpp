#include<iostream>
using namespace std;

int main()
{
	cout << "������������������" << endl;
	int a, b;
	cin >> a >> b;
	if ((a < 0 || b < 0))
	{
		cout << "���������ֵ����������" << endl;
	}//ȷ�����������������������
	int n = 1;
	for ( n = min(a,b);(a>0||b>0) ; n--)
	{
		if (a % n == 0 && b % n == 0)
		{
			cout << "���Լ��Ϊ��" << n << endl;
			break;
		}

	}//�����Լ��
	for(n=max(a,b); (a > 0 || b > 0);n++)
	{
		if (n % a == 0 && n % b == 0)
		{
			cout << "��С������Ϊ��" << n << endl;
			break;
		}

	}//����С������

     return 0;
}