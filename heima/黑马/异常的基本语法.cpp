#include<iostream>
using namespace std;

class Myexception
{
public:
	void printError()
	{
		cout << "���Լ��쳣��Ĵ���" << endl;
	}

};

class Person
{
public:
	Person()
	{
		cout << "Person�Ĺ��캯��" << endl;
	}
	~Person()
	{
		cout << "Person ����������" << endl;
	}

};

int myDivide(int a, int b)
{
	if (b == 0)
	{
		//return -1;
		//throw 1.345;


		////ջ����:��try����鿪ʼ�𣬵� throm�׳��쳣ǰ��
		//����ջ�ϵĶ��󶼱��ͷŵ����ͷŵ�˳��͹����˳�����෴�ģ�������̳�Ϊջ����
		Person p1;
		Person p2;
		cout << "aaa" << endl;
		throw  Myexception();//�׳�һ��Myexception ����������
	}
	return a / b;
}


void test01()
{
	int a = 10;
	int b = 0;
	//����ִ��һ�� ���ܻ�����쳣�Ĵ���
	try
	{
		int ret = myDivide(a, b);
		cout << "ret :" << ret << endl;

	}
	catch (int)
	{
		cout << "int���͵��쳣����" << endl;
	}
	catch (double)
	{	//����󣬲��봦������������׳�����쳣
		throw;
		cout << "double���͵��쳣����" << endl;
	}
	catch (Myexception e)
	{
		e.printError();
	}
	catch (...)
	{
		cout << "�������͵��쳣����" << endl;
	}

}

int main()
{
	try
	{
		test01();
	}
	catch (double)
	{
		cout << "main�����е�double���͵��쳣����" << endl;
	}
	//test01();

	return 0;
}