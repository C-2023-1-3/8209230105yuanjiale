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
		}//����ո�����
		if (strncmp(s1, s2 + n, length1) == 0)
		{
			return n - m + 1;
        }//������Ӧ���±꣬��ȥ�ո���������õ���ȥ�ո���±�
	}
	return -1;//δ������������-1
}

int main()
{
	char s1[520], s2[520];
	cout << "Enter the first string:";
	cin.getline(s1,520);
	cout << "Enter the second string:";
	cin.getline(s2,520);//���������ַ���
	cout<<"indexOf(��"<<s1<<"��,��" <<s2<<"��)" << indexOf(s1, s2);//���ú�����������
    return 0;
}