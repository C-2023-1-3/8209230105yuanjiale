#include<iostream>
using namespace std;

void count(const char s[], int counts[])
{
	int length = strlen(s);
	for (int n = 0; n < length; n++)
	{
		for (int i = 0; i < 26; i++)
		{
			if (s[n] == i+65)
			{
				counts[i]=counts[i]+1;
			}//���ó���Ϊ26������������ĸ���ֵĸ���

		}
	}
}
int main()
{
	cout << "Enter a string: ";
	char s[100];
	cin.getline(s,100);//��ȡ����
	int length = strlen(s);
	for (int n = 0; n < length; n++)
	{
		s[n] = toupper(s[n]);//��Сд��ĸת���ɴ�д��ĸ���ڼ���
	}
	int counts[26];
	for (int n = 0; n < 26; n++)
	{
		counts[n] = 0;
	}//���岢��ʼ����������
	count(s, counts);//���ú�����ʵ�ּ���
	for (int n = 0; n < 26; n++)
	{
		if (counts[n] != 0)//�������Ĵ���
			cout <<char(n + 97) <<": "<<counts[n] << " times" << endl;
	}
}