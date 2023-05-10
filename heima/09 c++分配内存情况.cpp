//const必须有初始化
#include<iostream>
#include<string>
using namespace std;

//1、 const分配内存取地址会分配临时内存
//2、 const编译器也会给const变量分配内存
void test01()
{
	const int m_a = 10;
	int* p = (int*)&m_a;
}
//3 、用普通变量初始化const 的变量
void test02()
{
	int a = 10;
	const int b = a;//会分配内存
	int *p = (int*)&b;
	*p = 1000;
	cout << "b = " << b << endl;
}
//4、自定义数据类型 加const也会分配内存
struct Person
{
	string m_Name = "qaq";
	int m_Age = 1;
};
void test03()
{
	const Person p1 ;
	//p1.m_Name = "aaa"
	Person * p = (Person*)&p1;
	p->m_Name = "德玛西亚";
	(*p).m_Age = 18;
	cout << "姓名：" << p1.m_Name << " 年龄：" << p1.m_Age << endl;
}

int main()
{
	//test02();
	test03();
	return 0;
}