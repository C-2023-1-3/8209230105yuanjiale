//�����ó���һ�����֣��൱������Ͱ���ظ������ֶ���ֵΪ������֣�
//�����ʱ�������������е�Ԫ�ص���������֣���ô�㲻�������
//���������������֣���ôֻ��Ҫ������������һ�鼴��
#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int n,e=0;
	cout << "Enter/�� ten numbers: ";
	for (int n = 0; n < 10; n++)
	{
		cin >> a[n];
		if (a[n] == -1000)
		{
			e = -1000;    
		}//�����ó�һ������
		for (int i = 0; i < n; i++)
		{
		 if (a[n] == a[i])
			{
				a[n] = -1000;
			}
		}
	}//����֮ǰ��ͬ�����ַ�������Ͱ
	cout << "The distinct numbers are:";
	for (int n = 0; n < 10; n++)
	{
		if (a[n] !=-1000)
		{
			cout << a[n] << " ";
		}
	}//������ֵ�����
	if (e==-1000)
	{
		cout << e;
    }//�����Ϊ����Ͱ������
	return 0;
}