#include <iostream>
using namespace std;


template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

template<typename T>
void myswap2()
{
	
	
	/*T temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/
}

void test01()
{
	int a = 10;
	int b = 20;
	//myswap(a, b);
	myswap<int>(a, b);
	myswap2<double>();//��ָ��T�����Ͳ���ʹ��
}

int main()
{
	test01();
		return 0;
}