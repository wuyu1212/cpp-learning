#include<iostream>
using namespace std;

class Myexception
{
public:

	Myexception()
	{
		cout << "Myexception构造函数的调用" << endl;
	}

	Myexception(const Myexception& e)
	{
		cout << "Myexception拷贝构造函数的调用" << endl;
	}
	~Myexception()
	{
		cout << "Myexception析构函数的调用" << endl;
	}
	void printError()
	{
		cout << "我自己异常类的错误" << endl;
	}

};

void dowork()
{
	throw new Myexception();
}

void test01()
{
	try
	{
		dowork();
	}
	//Myexception e（值得方式）会调用拷贝构造
	//Myexception &e 引用方式 接受 建议用这种方式节省开销
	//Myexception *e 指针方式 接受 抛出 & Myexception()；匿名对象，对象被释放掉，不可以在操作e了
	//Myexception *e 指针方式 接受 抛出 new Myexception()；堆区创建对象 记得  手动释放
	catch (Myexception *e)
	{
		cout << "myexception的异常捕获" << endl;
		delete e;
	}
}


int main()
{
	test01();
	return 0;
};