#include<iostream>
using namespace std;
int swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
	return 0;
}//��������
int bubble(int* list,int size)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	return 1;
}//������
int main()
{
	int n;
	cout << "����������Ԫ�ظ�����";
    cin >> n;
	int* arr = new int[n];
	cout << "������һ�����飺";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}//������̬���鲢��������Ԫ�ظ���������Ԫ��
	bubble(arr,n);
	cout << "�����Ľ��Ϊ��";
	for (int i = 0; i < n; i++)
	{
		cout<<*(arr+i)<<"  ";
	}//��ָ��ķ�ʽ�������Ԫ��
	delete[]arr;//�ͷ������ڴ�

	return 0;
}