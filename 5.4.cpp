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
int max(stu* a)//设立一个函数max，用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者
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
	stu five[5] = {//建立一个对象数组
		stu(230101,83),
		stu(230102,86),
		stu(230103,91),
		stu(230104,89),
		stu(230105,92)
	};

	cout<<"成绩最高者的学号为：" << max(five) << endl;//输出成绩最高者学号

	return 0;
}