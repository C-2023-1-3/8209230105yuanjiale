#include <iostream>  
using namespace std;
int hex(int a,int b){
    if (a == 0)
    {
        return 1;
    }
    for (int j = 0; j < b; j++)
    {
        a *= 16;
    }
    return a;//实现十六的n次方的函数
}
int parseHex(const char* const hexString){
    int length = strlen(hexString);
    int tem=0, fin=0;
    for (int i=0; i < length; i++)
    {
        int zhi = length - (i+1);
        if (hexString[i] >= 'A' && hexString[i] <= 'F')
        {
            tem = hexString[i] - 'A' + 10;//将大写十六进制数字转化为十进制
            fin += hex(tem, zhi);
        }
        if (hexString[i] >= 'a' && hexString[i] <= 'f')
        {
            tem = hexString[i] - 'a' + 10;//将小写十六进制数字转化为十进制
            fin += hex(tem, zhi);
        }
        if (hexString[i] >= '0' && hexString[i] <= '9')
        {
            tem = hexString[i]-'0';
            fin += hex(tem, zhi);//将不同位数上的数字加起来，得到最终数字
        }
    }
    return fin;
}
int main() {
    cout<<parseHex("A5");//调用函数输出转化结果
    return 0;
}