//const�����г�ʼ��
#include<iostream>
#include<string>
using namespace std;

//1�� const�����ڴ�ȡ��ַ�������ʱ�ڴ�
//2�� const������Ҳ���const���������ڴ�
void test01()
{
	const int m_a = 10;
	int* p = (int*)&m_a;
}
//3 ������ͨ������ʼ��const �ı���
void test02()
{
	int a = 10;
	const int b = a;//������ڴ�
	int *p = (int*)&b;
	*p = 1000;
	cout << "b = " << b << endl;
}
//4���Զ����������� ��constҲ������ڴ�
struct Person
{
	string m_Name = "qaq";
	int m_Age = 1;
};
void test03()
{
	const Person p1 ;
	//p1.m_Name = "aaa"
	Person * p = (Person*)&p1;
	p->m_Name = "��������";
	(*p).m_Age = 18;
	cout << "������" << p1.m_Name << " ���䣺" << p1.m_Age << endl;
}

int main()
{
	//test02();
	test03();
	return 0;
}