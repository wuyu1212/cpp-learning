#include <iostream>
using namespace std;

const double pi = 3.14;

class Circle
{
public:

	double calculate()
	{
		return 2 * pi * m_R;
	}

	void set_R( int r)
	{
		m_R = r;
	}

	int m_R;
};

void test01()
{
	Circle c1;
	c1.m_R = 10;

	cout << "c1的周长为：  " << c1.calculate() << endl;
}

void test02()
{
	Circle c1;
	//c1.m_R = 10;
	c1.set_R(10);
	cout << "c1的周长为：  " << c1.calculate() << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}