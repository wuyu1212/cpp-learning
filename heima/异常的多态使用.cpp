#include<iostream>
using namespace std;

//异常 基类
class BaseException
{

public:
	virtual void prnitError()
	{

	}
};

class NULLPointException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "空指针异常" << endl;
	}

};

class OutofrangeException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "空指针异常" << endl;
	}

};

void  dowork()
{
	//throw NULLPointException();
	throw OutofrangeException();
}

void test01()
{

	try
	{
		dowork();
	}
	catch (BaseException& e)
	{
		e.prnitError();
	}
}

int main()
{

	test01();
	return 0;
}