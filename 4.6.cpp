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
			}//利用长度为26的数组数出字母出现的个数

		}
	}
}
int main()
{
	cout << "Enter a string: ";
	char s[100];
	cin.getline(s,100);//获取数组
	int length = strlen(s);
	for (int n = 0; n < length; n++)
	{
		s[n] = toupper(s[n]);//将小写字母转化成大写字母便于计数
	}
	int counts[26];
	for (int n = 0; n < 26; n++)
	{
		counts[n] = 0;
	}//定义并初始化计数数组
	count(s, counts);//调用函数，实现计数
	for (int n = 0; n < 26; n++)
	{
		if (counts[n] != 0)//输出非零的次数
			cout <<char(n + 97) <<": "<<counts[n] << " times" << endl;
	}
}