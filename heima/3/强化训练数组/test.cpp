#include<iostream>
using namespace std;
#include "MyArray.h"

void test01()
{
	//������������
	MyArray* array = new MyArray(30);
	MyArray* array2 = new MyArray(*array);  //new��ʽָ�����ÿ�������
	MyArray array3 = *array;    //���캯�����صı���
	//MyArray* array2(array);


	for (int i = 0; i < 10; i++)
	{
		array2->push_Back(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array2->getData(i) << endl;
	}
	array2->setdata(0, 1000);

	cout << array2->getData(0) << endl;
	delete array;
	
}

int main()
{
	test01();
	return 0;
}