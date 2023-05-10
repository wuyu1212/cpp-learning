#include <iostream>
using namespace std;

//泛型编程：类型也变成参数
template<class NAMETYPE,class AGETYPE>
class Person
{
public:
	Person(NAMETYPE name, AGETYPE age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	NAMETYPE m_Name;
	AGETYPE m_Age;
};


void test01()
{
	//Person p1("Tom", 11);//对于类模板，使用时候不可以用自动类型推导
	Person<string, int> p1 ("tom", 11);
	cout << "姓名：" << p1.m_Name << " 年龄：" << p1.m_Age << endl;

}


int main()
{
	test01();
	return 0;

}