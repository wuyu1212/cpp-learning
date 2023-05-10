#include <iostream>
using namespace std;


//静态类型转换
void test01()
{
	//内置数据转换
	char a = 'a';

	//static_cast<目标类型>(原对象)
	double d = static_cast<double>(a);

	cout << d << endl;

}
class Base
{
	virtual void func() {};
};
class Son:public Base
{
	virtual void func() {};
};
class Other
{};

void test02()

{
	//自定义数据类型
	Base* base = NULL;
	Son* son = NULL;

	//base 转为son 类型  向下类型转换 不安全
	Son* son2 = static_cast<Son*>(base);
	Base* base2 = static_cast<Base*>(son);
	//base 转为 other*
	//没有父子关系的两个类型之间是无法转换的
	//Other* other = static_cast<Other*>(base);

}

//动态类型转换
void test03()
{
	//内置数据类型  捕鱼必须内置数据类型的转换
	char c = 'c';
	//double d = dynamic_cast<double>(c);
	Base* base = NULL;
	Son* son = NULL;
	//base 转为Son* 类型 不安全
	//转换失败
	//Son* son2 = dynamic_cast<Son*>(base);
	Base* son2 = dynamic_cast<Base*>(son);
	//如果发生多态，那么父子之间的转换 总是安全的
	Base* base3 = new Son;
	//将base3 转为Son*
	Son*son3 = dynamic_cast<Son*>(base3)

}

int main()
{
	//test01();
	test02();
	return 0;
}