#include<iostream>
using namespace std;

class Base1
{
public:
	Base1()
	{
		m_A = 10;
	}
public:
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_B = 20;
		m_A = 30;
	}
public:
	int m_B,m_A;
};
class Son : public Base1, public Base2
{
public:

	int m_C;
	int m_D;

};

void test01()
{
	cout << sizeof(Son) << endl;
	Son s;
	cout << "Base��m_A= " << s.Base1::m_A<<endl;

}


int main()
{
	test01();
	return 0;
}