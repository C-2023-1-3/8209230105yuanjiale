#include<iostream>
using namespace std;

int maxgys(int& a, int& b,int& n)
{
	 n = 1;
	for (n = min(a, b); (a > 0 || b > 0); n--)
	{
		if ((a == 0 || b == 0))
		{
			break;
		}
		if (a % n == 0 && b % n == 0)
		{
			break;
		}
		

	}//�����Լ��
     
	return 0;
}

int maxandmin(int& a, int& b,int& n)//�ں����������Լ������С������
{
	for (n = max(a, b); (a > 0 || b > 0); n++)
	{
		if ((a == 0 || b == 0))
		{
			break;
		}
		if (n % a == 0 && n % b == 0)
		{
			
			break;
		}

	}//����С������

	return 0;
}

int main()
{
	cout << "������������Ȼ����" ;
	int m, n, x;
	cin >> m >> n;
	maxgys(m, n, x);
    if ((m< 0 || n < 0))
	{
		cout << "���������ֵ����������" << endl;
	}//����������ֲ�Ϊ��Ȼ�������
	else
	{
		cout << "���Լ��Ϊ��" << x << endl;
	}//�����Լ��
	maxandmin(m, n, x);
	if ((m == 0 || n == 0))
	{
		cout << "������û����С������" << endl;
	}
	else if (x % m == 0 && x % n == 0)
	{
		cout << "��С������Ϊ��" << x << endl;
	
	}//�����С������
	return 0;
}