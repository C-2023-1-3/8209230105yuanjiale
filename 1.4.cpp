#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	float shishu = 5.201314;
	cout << "output in oct type:" << oct<< testUnint << endl;//ת��Ϊ8����;
    cout << "output in int type:" << static_cast<int>(shishu) << endl;//��ʵ��ת��Ϊint����

	system("pause");
	return 0;
}