#include <iostream>  
#include <string>  //�����ַ���ͷ�ļ�
using namespace std;

int main() 
{
    string input;
    int l = 0, s = 0, d = 0, o = 0;

    cout << "������һ���ַ�: ";
    getline(cin, input);  //��ȡ����������ַ�

    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            l++;//����Сд��ĸ
        }
        else if (c >= 'A' && c <= 'Z') {
            l++;//������д��ĸ
        }
        else if (c >= '0' && c <= '9') {
            d++;//��������
        }
        else if (c == ' ') 
        {
            s++;
        }
        else {
            o++;//���������ַ�

        }
    }

    cout << "Ӣ����ĸ����: " << l<< endl;
    cout << "�ո����: " << s << endl;
    cout << "�����ַ�����: " << d << endl;
    cout << "�����ַ�����: " << o << endl;

    return 0;
}