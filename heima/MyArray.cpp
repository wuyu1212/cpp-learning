#include "MyArray.h"

//默认构造
MyArray::MyArray()
{
	this->m_Capacity = 100;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}
//有参构造  参数 数组容量
MyArray::MyArray(int capacity)
{
	//cout << "有参函数调用" << endl;
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}
//拷贝构造
MyArray::MyArray(const MyArray& array)
{
	this->pAddress = new int[array.m_Capacity];
	this->m_Capacity = array.m_Capacity;
	this->m_Size = array.m_Size;
	for (int i = 0; i < array.m_Size; i++)
	{
		this->pAddress[i] = array.pAddress[i];
	}
}
//析构
MyArray::~MyArray()
{
	//cout << "析构调用" << endl;
	if (this->pAddress != NULL)
	{
		delete[] this->pAddress;
		this->pAddress = NULL;
	}
}
void MyArray::push_Back(int val)
{
	this->pAddress[this->m_Size] = val;
	this->m_Size++;

}

int MyArray::getData(int index)
{
	return this-> pAddress[index];
}

void MyArray::setdata(int index, int val)
{
	this->pAddress[index] = val;
}
