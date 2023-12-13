#include<iostream>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int length1 = strlen(s1);
    int length2 = strlen(s2);
    for (int n = 0,m=0; n < length2; n++)
	{
		if (s2[n] ==32)
		{
			m++;
		}//计算空格数量
		if (strncmp(s1, s2 + n, length1) == 0)
		{
			return n - m + 1;
        }//检索对应的下标，减去空格的数量，得到除去空格的下标
	}
	return -1;//未检索到，返回-1
}

int main()
{
	char s1[520], s2[520];
	cout << "Enter the first string:";
	cin.getline(s1,520);
	cout << "Enter the second string:";
	cin.getline(s2,520);//输入两个字符串
	cout<<"indexOf(“"<<s1<<"”,“" <<s2<<"”)" << indexOf(s1, s2);//调用函数，输出结果
    return 0;
}