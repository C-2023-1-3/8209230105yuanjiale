#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	float shishu = 5.201314;
	cout << "output in oct type:" << oct<< testUnint << endl;//转化为8进制;
    cout << "output in int type:" << static_cast<int>(shishu) << endl;//将实数转化为int类型

	system("pause");
	return 0;
}