#include <iostream>
using namespace std;
//告诉编译器 有个Person模板类，先不要报错
template<class T1, class T2> class Person;
//告诉编译器 有个模板函数的声明
template<class T1, class T2> void printPerson2(Person<T1, T2>& p);
//将模板函数声明和实现写到一起
template<class T1, class T2>
void printPerson3(Person<T1, T2>& p)
{
	cout << "姓名：" << p.m_Name << "年龄： " << p.m_Age << endl;
}
template<class T1,class T2>
class Person
{
	//1.全局函数  配合友元 做类内实现
	friend void printPerson(Person<T1, T2>& p)
	{
		cout << "姓名：" << p.m_Name << "年龄： " << p.m_Age << endl;
	}
	//2.全局函数 配合友元 类外实现
	friend void printPerson2<>(Person<T1, T2>& p);
	//3.全局函数 配合友元 类外实现
	friend void printPerson3<>(Person<T1, T2>& p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	cout << "姓名：" << p.m_Name << "年龄： " << p.m_Age << endl;

}


void test01()
{
	Person<string, int>p("bbb", 10);
	//printPerson(p);
	//printPerson2(p);
	printPerson3(p);
}
int main()
{
	test01();

	return 0;
}