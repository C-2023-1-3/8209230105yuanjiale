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
    return a;//ʵ��ʮ����n�η��ĺ���
}
int parseHex(const char* const hexString){
    int length = strlen(hexString);
    int tem=0, fin=0;
    for (int i=0; i < length; i++)
    {
        int zhi = length - (i+1);
        if (hexString[i] >= 'A' && hexString[i] <= 'F')
        {
            tem = hexString[i] - 'A' + 10;//����дʮ����������ת��Ϊʮ����
            fin += hex(tem, zhi);
        }
        if (hexString[i] >= 'a' && hexString[i] <= 'f')
        {
            tem = hexString[i] - 'a' + 10;//��Сдʮ����������ת��Ϊʮ����
            fin += hex(tem, zhi);
        }
        if (hexString[i] >= '0' && hexString[i] <= '9')
        {
            tem = hexString[i]-'0';
            fin += hex(tem, zhi);//����ͬλ���ϵ����ּ��������õ���������
        }
    }
    return fin;
}
int main() {
    cout<<parseHex("A5");//���ú������ת�����
    return 0;
}