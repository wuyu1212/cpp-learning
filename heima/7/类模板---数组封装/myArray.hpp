#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{

public:
	//�вι���
	explicit MyArray(int capacity)//MyArray arr = 100
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//��������
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];

		for (int i = 0;i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

	MyArray& operator = (const MyArray& arr)
	{

		//���ж�ԭ���Ƿ������ݣ���������ͷŵ�
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];

		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;

	}

	//[]���������
	T& operator[](int index)
	{

		return this->pAddress[index];
	}

	//β�巨
	void pushback(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}

		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void popback()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;

	}

	//���������С
	int getsize()
	{
		return this->m_Size;
	}

private:
	//��ʵ���ٵ��������ݵ�ָ��
	T* pAddress;

	//��������
	int m_Capacity;

	//���鳤��
	int m_Size;
};