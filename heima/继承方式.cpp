#include<iostream>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 100;//基类中公有的属性 可继承，还是public
		m_B = 100;//基类中保护的属性 可继承，还是protected 类外访问不到
		//m_C = 100;基类中私有的属性 不可继承
	}

};
//----------------------保护继承----------------------
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2
{
public:
	void func()
	{
		m_A = 100;//基类中公有的属性 可继承，还是public
		m_B = 100;//基类中保护的属性 可继承，还是protected 类外访问不到
		//m_C = 100;基类中私有的属性 不可继承
	}
};


void test01()
{
	Son2 s;
	//s.m_A = 100;//protected 类外不可访问
	Son1 s1;
	s1.m_A = 100;
}
//--------------------私有继承--------------------

class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//基类中公有的属性 可继承，还是public
		m_B = 100;//基类中保护的属性 可继承，还是protected 类外访问不到
		//m_C = 100;基类中私有的属性 不可继承
	}
};
class GrandSon3 : public Son3
{
public:
	void myFunc()
	{
		//cout << m_A << endl; //孙子类中 访问不到 m_A，因为在Son3中m_A已经是私有属性了
	}

};

int main()
{


	return 0;
}