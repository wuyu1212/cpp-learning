#include<iostream>
using namespace std;

class Myexception
{
public:

	Myexception()
	{
		cout << "Myexception���캯���ĵ���" << endl;
	}

	Myexception(const Myexception& e)
	{
		cout << "Myexception�������캯���ĵ���" << endl;
	}
	~Myexception()
	{
		cout << "Myexception���������ĵ���" << endl;
	}
	void printError()
	{
		cout << "���Լ��쳣��Ĵ���" << endl;
	}

};

void dowork()
{
	throw new Myexception();
}

void test01()
{
	try
	{
		dowork();
	}
	//Myexception e��ֵ�÷�ʽ������ÿ�������
	//Myexception &e ���÷�ʽ ���� ���������ַ�ʽ��ʡ����
	//Myexception *e ָ�뷽ʽ ���� �׳� & Myexception()���������󣬶����ͷŵ����������ڲ���e��
	//Myexception *e ָ�뷽ʽ ���� �׳� new Myexception()�������������� �ǵ�  �ֶ��ͷ�
	catch (Myexception *e)
	{
		cout << "myexception���쳣����" << endl;
		delete e;
	}
}


int main()
{
	test01();
	return 0;
};