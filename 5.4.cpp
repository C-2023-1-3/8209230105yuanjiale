#include<iostream>
using namespace std;
class stu
{
public:
	int num;
	int score;
	stu(int Num, int Score)
	{
		num = Num;
		score = Score;
	}
};
int max(stu* a)//����һ������max����ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ���
{
	for (int i = 4; i >= 0; i--)
	{
		if (i == 0)
		{
			return a[i].num;
		}
		if (a[i].score > a[i - 1].score) {
			a[i - 1].num = a[i].num;
			a[i - 1].score = a[i].score;
		}
	}
}
int main()
{
	stu five[5] = {//����һ����������
		stu(230101,83),
		stu(230102,86),
		stu(230103,91),
		stu(230104,89),
		stu(230105,92)
	};

	cout<<"�ɼ�����ߵ�ѧ��Ϊ��" << max(five) << endl;//����ɼ������ѧ��

	return 0;
}