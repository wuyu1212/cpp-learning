#include <iostream>
using namespace std;

//���ͱ�̣�����Ҳ��ɲ���
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
	//Person p1("Tom", 11);//������ģ�壬ʹ��ʱ�򲻿������Զ������Ƶ�
	Person<string, int> p1 ("tom", 11);
	cout << "������" << p1.m_Name << " ���䣺" << p1.m_Age << endl;

}


int main()
{
	test01();
	return 0;

}