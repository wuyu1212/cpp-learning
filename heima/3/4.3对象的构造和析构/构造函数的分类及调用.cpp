#include<iostream>
using namespace std;
class Person
{

public:

	Person()
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}
	Person(int a)
	{
		//m_Age = a;
		cout << "�вι��캯������ " << endl;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "�������캯������" << endl;

	}
	~Person()
	{
		cout<< "������������" << endl;
	}

	int m_Age;
};


void test01()
{
	//���캯�����÷�ʽ
	//���ŷ�����
	/*Person p1(1);
	p1.m_Age = 10;
	Person p2(p1); 
	cout << "p2������" << p2.m_Age << endl;*/
	//��ʾ������
	Person p4 = Person(100);
	Person p5 = Person(p4);
	//Person(100);
	Person p6 = Person(p5);
	Person p7 = 100; 
	Person p8 = p7; 
}


int main()
{
	test01();

	return 0;
}