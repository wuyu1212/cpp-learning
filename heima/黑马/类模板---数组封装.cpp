#include <iostream>
using namespace std;
#include"myArray.hpp"

void printIntArrary(MyArray<int>& myArr)
{
	for (int i = 0; i < myArr.getsize(); i++)
	{
		cout << myArr[i] << " ";
	}
	cout << endl;
}
void test01()
{
//����int ��������
	MyArray<int>myIntArrary(100);
	for (int i = 0;i < 10;i++)
	{
		myIntArrary.pushback(i + 100);
	}
//��ӡint��������
	printIntArrary(myIntArrary);
}

int main()
{
	test01();
	return 0;
}