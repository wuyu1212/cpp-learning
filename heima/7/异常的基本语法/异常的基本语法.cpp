#include<iostream>
using namespace std;

class Myexception
{
public:
	void printError()
	{
		cout << "我自己异常类的错误" << endl;
	}

};

class Person
{
public:
	Person()
	{
		cout << "Person的构造函数" << endl;
	}
	~Person()
	{
		cout << "Person 的析构函数" << endl;
	}

};

int myDivide(int a, int b)
{
	if (b == 0)
	{
		//return -1;
		//throw 1.345;


		////栈解旋:从try代码块开始起，到 throm抛出异常前，
		//所有栈上的对象都被释放掉，释放的顺序和构造的顺序是相反的，这个过程成为栈解旋
		Person p1;
		Person p2;
		cout << "aaa" << endl;
		throw  Myexception();//抛出一个Myexception 的匿名对象
	}
	return a / b;
}


void test01()
{
	int a = 10;
	int b = 0;
	//尝试执行一段 可能会出现异常的代码
	try
	{
		int ret = myDivide(a, b);
		cout << "ret :" << ret << endl;

	}
	catch (int)
	{
		cout << "int类型的异常捕获" << endl;
	}
	catch (double)
	{	//捕获后，不想处理，想继续向上抛出这个异常
		throw;
		cout << "double类型的异常捕获" << endl;
	}
	catch (Myexception e)
	{
		e.printError();
	}
	catch (...)
	{
		cout << "其他类型的异常捕获" << endl;
	}

}

int main()
{
	try
	{
		test01();
	}
	catch (double)
	{
		cout << "main函数中的double类型的异常捕获" << endl;
	}
	//test01();

	return 0;
}