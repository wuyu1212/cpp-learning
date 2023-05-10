#include <iostream>
using namespace std;



int myPlus(int a, int b)
{
	return a + b;
}


template<class T>
int myplus2(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myPlus(a,c) << endl;
	//myplus2(a,c)自动类型推导不可行，但是显示指定类型方式可行

}
//调用规则

template<class T>
void myPrint(T a, T b)
{
	cout << "函数模板调用" << endl;
 }

template<class T>
void myPrint(T a, T b ,T c)
{
	cout << "函数模板调用(T a, T b，T c)" << endl;
}

void myPrint(int a,  int b)
{
	cout << "普通函数调用" << endl;
}

void test02()
{
	//1. 如果普通函数和模板函数可以同时调用，只使用普通函数
	int a = 10;
	int b = 20;
	myPrint(a, b);

	//2. 强制调用 函数模板的内容，可以使用空参数列表
	myPrint<>(a, b);

	//3.函数模板也可以重载
	myPrint(a, b, 10);

	//4.函数模板可以产生更好的匹配，优先使用函数模板
	char c = 'c ';
	char d = 'd ';
	myPrint(c, d);
}

int main()
{

	//test01();
	test02();
	return 0;
}