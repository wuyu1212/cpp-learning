#include "MyArray.h"

//Ĭ�Ϲ���
MyArray::MyArray()
{
	this->m_Capacity = 100;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}
//�вι���  ���� ��������
MyArray::MyArray(int capacity)
{
	//cout << "�вκ�������" << endl;
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}
//��������
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
//����
MyArray::~MyArray()
{
	//cout << "��������" << endl;
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
