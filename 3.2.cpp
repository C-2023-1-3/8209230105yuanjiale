#include<iostream>
using namespace std;
bool is_prime(int num);//�����ж������ĺ���
int main()
{
	cout << "������һ��������";
	int a ;
	cin >> a;
	if (is_prime(a) == 1)
	{
		cout << "������"<<endl;
	}
	else
	{
		cout << "��������"<<endl;
	}//�жϲ�����Ƿ�Ϊ����
    cout << "ǰ���ٸ�����Ϊ��" << endl;
	int b = 2;
	for (int m = 1; m <= 200; m++,b++)
	{
		for (;; b++)
		{
			if (is_prime(b) == 1)
			{

				cout << b<<'\t';
				break;
			}
		}
		if (m % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}//Ѱ��ǰ200������
bool is_prime(int num)//�����ж������ĺ���
{
	int n = 0;
	for (n = num - 1; n > 0; n--)
	{
		if (num % n == 0)
		{
			break;
		}
	}
	if (n == 1)
	{
		return 1;//����Ϊ��
	}
	else
	{
		return 0;//����Ϊ��
	}
}
