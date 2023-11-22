#include <iostream>
using namespace std;
    int main() 
    {
        for (int a = 1; a <= 5;a++)//a赋值为1确保第二个for第一次执行不会空转
        {
            
            for (int b=0; a >b; b++)
            {
                cout << "*";
            }
            cout << endl;//第几行就输出几个*，a为行数，限制b的输出个数
        }
          return 0;
    }