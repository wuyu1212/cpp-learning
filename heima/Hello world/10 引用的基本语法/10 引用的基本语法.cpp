#include<iostream>
using namespace std;

//1.引用基本语法 type类型一样 
void test01()
{
	int a = 10;
	int& b = a;

	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void test02()
{
	
	//int& a; 必须初始化
	int a = 10;
	int& b = a;//初始化后就不可以修改了，不能再成为别的别名
	int c = 20;
	b = c; //赋值！！！
	
}
//3、 对数组建立引用
void test03()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//给数组起别名
	int(&parr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << parr[i] << " ";
	}
	cout << endl;
	//第二种方式起别名
	typedef int(arrayef)[10];//一个具有10个元素的int类型数组
	arrayef& parr2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << parr2[i] << " ";
	}

}


int main()
{
	//test01();
	test03();
	return 0;
}