#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void setTime()//�������ڶ����Ա����
	{
		cout << "�������趨��Сʱ��";
		cin >> hour;
		cout << "�������趨�ķ��ӣ�";
		cin >> minute;
		cout << "�������趨���룺";
		cin >> sec;
	}
	void showTime()
	{
		cout << "�趨��ʱ��Ϊ��" << hour << ":" << minute << ":" << sec << endl;
	}
private:             // �����ݳ�Ա��Ϊ˽�е�
    int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;       //����t1ΪTime�����
	t1.setTime();//���빦���ó�Ա����ʵ��
	t1.showTime();//��������ó�Ա����ʵ��
	return 0;
}
