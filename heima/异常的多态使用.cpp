#include<iostream>
using namespace std;

//�쳣 ����
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
		cout << "��ָ���쳣" << endl;
	}

};

class OutofrangeException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "��ָ���쳣" << endl;
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