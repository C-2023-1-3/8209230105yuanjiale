#include<iostream>
using namespace std;


void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) {
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size2) {
		list3[k++] = list2[j++];
	}
	for (int n = 0; n < size1 + size2; n++)
	{
		cout << list3[n]<<" ";
	}
}//排序与合并同时进行的函数
int main()
{
	cout << "Enter list1:";
	int size1;
	cin >> size1;
	int list1[80];
	for (int n = 0; n < size1; n++)
	{
		cin >> list1[n];
	}
	cout << "Enter list2:";
	int size2;
	cin >> size2;
	int list2[80];
	for (int n = 0; n < size2; n++)
	{
		cin >> list2[n];
	}
	int list3[160];
	cout << "The merged list is:";
	merge(list1, size1, list2, size2, list3);
	return 0;//输出新的排列好的数组
}