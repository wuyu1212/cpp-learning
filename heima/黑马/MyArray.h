#pragma once
#include<iostream>
using namespace std;
class MyArray
{
public:
	MyArray();
	MyArray(int capacity);
	MyArray(const MyArray& array);
	~MyArray();

//β�巨
	void push_Back(int val);
//������ȡֵ
	int getData(int index);
//��������ֵ		
	void setdata(int index, int val);
private:
	int* pAddress;
	int m_Size;
	int m_Capacity;
};

