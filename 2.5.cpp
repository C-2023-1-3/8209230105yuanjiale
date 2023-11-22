#include <iostream>  
#include <string>  //操作字符的头文件
using namespace std;

int main() 
{
    string input;
    int l = 0, s = 0, d = 0, o = 0;

    cout << "请输入一行字符: ";
    getline(cin, input);  //获取键盘输入的字符

    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            l++;//记数小写字母
        }
        else if (c >= 'A' && c <= 'Z') {
            l++;//计数大写字母
        }
        else if (c >= '0' && c <= '9') {
            d++;//计数数字
        }
        else if (c == ' ') 
        {
            s++;
        }
        else {
            o++;//计数其他字符

        }
    }

    cout << "英文字母个数: " << l<< endl;
    cout << "空格个数: " << s << endl;
    cout << "数字字符个数: " << d << endl;
    cout << "其他字符个数: " << o << endl;

    return 0;
}