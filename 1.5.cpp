#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float C,F;//�������϶Ⱥͻ��϶�
	cout << "�����뻪�϶ȣ�" ;
	cin >> F;
	C = (F - 32)/1.8;//���϶Ⱥͻ��϶ȵ�ת����ʽ
	cout<<fixed <<"��Ӧ�����϶�Ϊ��"<<setprecision(2)<< C << endl;//������λС�����
	return 0;
}