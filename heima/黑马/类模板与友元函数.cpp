#include <iostream>
using namespace std;
//���߱����� �и�Personģ���࣬�Ȳ�Ҫ����
template<class T1, class T2> class Person;
//���߱����� �и�ģ�庯��������
template<class T1, class T2> void printPerson2(Person<T1, T2>& p);
//��ģ�庯��������ʵ��д��һ��
template<class T1, class T2>
void printPerson3(Person<T1, T2>& p)
{
	cout << "������" << p.m_Name << "���䣺 " << p.m_Age << endl;
}
template<class T1,class T2>
class Person
{
	//1.ȫ�ֺ���  �����Ԫ ������ʵ��
	friend void printPerson(Person<T1, T2>& p)
	{
		cout << "������" << p.m_Name << "���䣺 " << p.m_Age << endl;
	}
	//2.ȫ�ֺ��� �����Ԫ ����ʵ��
	friend void printPerson2<>(Person<T1, T2>& p);
	//3.ȫ�ֺ��� �����Ԫ ����ʵ��
	friend void printPerson3<>(Person<T1, T2>& p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	cout << "������" << p.m_Name << "���䣺 " << p.m_Age << endl;

}


void test01()
{
	Person<string, int>p("bbb", 10);
	//printPerson(p);
	//printPerson2(p);
	printPerson3(p);
}
int main()
{
	test01();

	return 0;
}