#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{

public:
	//有参构造
	explict MyArray(int capacity)//MyArray arr = 100
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//拷贝构造
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];

		for (int i = 0；i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	
		
	MyArray& operator = (const MyArray & arr)
		{

		//先判断原来是否有数据，如果有先释放掉
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
			this->m_Capacity = arr.capacity;
			this->m_Size = arr.m_Size;
			this->pAddress = new T[this->m_Capacity];

			for (int i = 0；i < m_Size; i++)
			{
				this->pAddress[i] = arr.pAddress[i];
			}
			return *this;

		}

	//[]运算符重载
	T& operator[](int index)
	{

		return this->pAddress[index];
	}

	//尾插法
	void pushback(const T& val)
	{
		if (this->m_Capacity == this->MyArray)
		{
			return;
		}

		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void popback()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;

	}

	//返回数组大小
	int getsize()
	{
		return this->m_Size;
	}
	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}
	private:
		//真实开辟到堆区数据的指针
		T* pAddress;

		//数组容量
		int m_Capacity;

		//数组长度
		int m_Size;
	};