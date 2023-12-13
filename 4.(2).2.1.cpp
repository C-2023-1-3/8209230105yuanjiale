#include<iostream>
using namespace std;

int indexOf(const char *s1, const char *s2)//将4.5中的函数改为含有指针的函数原型
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	for (int n = 0, m = 0; n < length2; n++)
	{
		if (s2[n] == 32)
		{
			m++;
		}
		if (strncmp(s1, s2 + n, length1) == 0)
		{
			return n - m + 1;
		}
	}
	return -1;
}

int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	cout << "indexOf(“" << s1 << "”,“" << s2 << "”)" << indexOf(s1, s2);
	return 0;
}