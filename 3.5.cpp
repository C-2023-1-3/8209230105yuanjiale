#include<iostream>
using namespace std;

int day(int& n,int& sum)
{
	sum = (sum + 1) * 2;
	n++;
	if (n < 10)
	{
		day(n, sum);//���õݹ�ʵ�ּ�������ӵ�һ�칲ժ������Ŀ
	}
   return 0;
}
int main()
{
	int sum = 1;
	int n = 1;
	day(n, sum);
    cout << "��һ����ӹ�ժ��" << sum << endl;//���ú���������
    return 0;
}