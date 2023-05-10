#include<iostream>
using namespace std;

void myswap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "myswap::a =" << a << endl;
	cout << "myswap::b =" << b << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myswap(a, b);//值传递
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
}

//地址传递
void myswap2(int * a ,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void test02()
{
	int a = 10;
	int b = 20;
	myswap2(&a, &b);//地址传递
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
}

//引用传递 类似传地址
void mySwap3(int& a, int& b)  //&a = a &b = b
{
	int tmp = a;
	a = b;
	b = tmp;
}

void test03()
{
	int a = 10;
	int b = 20;
	mySwap3(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}