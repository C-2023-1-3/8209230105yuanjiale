//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;

void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value()//�����ⶨ��set_value����
{
    cout << "�븳ֵ��" << endl;
  
    cout << "num��";
    cin >> num;
    
    cout << "name��";
    cin >> name;
   
    cout << "sex��";
    cin >> sex;
}
