#include<iostream>
using namespace std;

	

int main()//�Ҷ���Ŀ����������һ�����ƻ��������100��
{
	int a = 2;
	int b;//����������forѭ���ı���
	float aver;
	for(int i=1;a<100;i++)
    {
		a *= 2;
		if (a > 100)
		{
			b = i;
		}
    }//��������������
	a = 2;
	for (int i = 1;i<b ; i++)
	{
		a *= 2;
	}//���㹫�ȵ�n�η�

	aver = (2 * (1 - a) / (1 - 2))/6*0.8;//���õȱ����й�ʽ�������ƽ��ÿ�컨����Ǯ
	cout << "ƽ��ÿ�컨��"<<aver <<"Ԫ"<< endl;
	return 0;
}