#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int m = 0; m < 100; m++)
	{
		a[m] = 1;
	}
	
		for (int i = 1; i < 100; i++)
		{
			for (int n = i; n < 100; n += (i + 2))
			{
				if (a[n])
				{
                  a[n] = false;
				}
				else
				{
					a[n] = true;
				}
			}
		}//���ݷ���ֵΪ��������ŵĹ������
		cout << "���ŵĹ������Ϊ��";
		for (int m = 0; m < 100; m++)
		{
			if(a[m])
			{
				cout << m +1<< "  ";
			}
		}//������ŵĹ��ӵ����
		return 0;
}