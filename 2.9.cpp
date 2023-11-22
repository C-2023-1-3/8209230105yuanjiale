#include<iostream>
using namespace std;

	

int main()//我对题目的理解是最后一天买的苹果不超过100个
{
	int a = 2;
	int b;//将变量带出for循环的变量
	float aver;
	for(int i=1;a<100;i++)
    {
		a *= 2;
		if (a > 100)
		{
			b = i;
		}
    }//计算可以买多少天
	a = 2;
	for (int i = 1;i<b ; i++)
	{
		a *= 2;
	}//计算公比的n次方

	aver = (2 * (1 - a) / (1 - 2))/6*0.8;//利用等比数列公式计算最后平均每天花多少钱
	cout << "平均每天花："<<aver <<"元"<< endl;
	return 0;
}