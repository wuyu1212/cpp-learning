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

//尾插法
	void push_Back(int val);
//索引获取值
	int getData(int index);
//索引设置值		
	void setdata(int index, int val);
private:
	int* pAddress;
	int m_Size;
	int m_Capacity;
};

