#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "构造函数调用" << endl;

	}
	~Person()
	{
		cout << "析构函数调用" << endl;
	}
};
void test01()
{
	//Person p1; //默认调用了构造和析构，是系统提供的两个空实现的函数
}

int main()
{
	Person p1;
	//test01();
	return 0;
}