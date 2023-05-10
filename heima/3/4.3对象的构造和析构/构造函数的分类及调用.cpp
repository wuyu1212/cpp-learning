#include<iostream>
using namespace std;
class Person
{

public:

	Person()
	{
		cout << "默认构造函数调用" << endl;
	}
	Person(int a)
	{
		//m_Age = a;
		cout << "有参构造函数调用 " << endl;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "拷贝构造函数调用" << endl;

	}
	~Person()
	{
		cout<< "析构函数调用" << endl;
	}

	int m_Age;
};


void test01()
{
	//构造函数调用方式
	//括号法调用
	/*Person p1(1);
	p1.m_Age = 10;
	Person p2(p1); 
	cout << "p2的年龄" << p2.m_Age << endl;*/
	//显示法调用
	Person p4 = Person(100);
	Person p5 = Person(p4);
	//Person(100);
	Person p6 = Person(p5);
	Person p7 = 100; 
	Person p8 = p7; 
}


int main()
{
	test01();

	return 0;
}