#include<iostream>
using namespace std;

int main()
{
	char letter;
	cout << "������һ����д��Сд��ĸ��";
	cin >> letter;
	if (letter < 97)
	{
		letter += 1;
		cout<<"����ʮ���ƺ��ASK2��Ϊ:" << int(letter) << endl;//����д��ĸת��Ϊ���ASK2��ֵ
	}
	if (letter > 96)
	{
		letter-=32;
		cout <<"���Ĵ�д��ĸΪ��"<< letter << endl;//��Сд��ĸת��Ϊ��д��ĸ
	}
	return  0;
}