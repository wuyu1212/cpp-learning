#include<iostream>
using namespace std;

class Person
{
public:
	Person() {};
	Person(int a,int b):m_A(a),m_B(b)
	{}
	//+жиди
	/*Person operator+( Person & p)
	{
		Person tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		return tmp;
	}*/

	int m_A;
	int m_B;
};
Person operator+(Person& p1, Person& p2)
{
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_A = p1.m_B + p2.m_B;
	return tmp;
}

void test01()
{
	Person P1(10,10);
	Person P2(10, 10);
	Person P3 = P1 + P2;
	cout << "p3 ЕФ m_A: " << P3.m_A << "  m_B: " << P3.m_B << endl;
}
int main()
{

	test01();

	return 0;
}