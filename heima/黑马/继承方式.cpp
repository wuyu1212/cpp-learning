#include<iostream>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 100;//�����й��е����� �ɼ̳У�����public
		m_B = 100;//�����б��������� �ɼ̳У�����protected ������ʲ���
		//m_C = 100;������˽�е����� ���ɼ̳�
	}

};
//----------------------�����̳�----------------------
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2
{
public:
	void func()
	{
		m_A = 100;//�����й��е����� �ɼ̳У�����public
		m_B = 100;//�����б��������� �ɼ̳У�����protected ������ʲ���
		//m_C = 100;������˽�е����� ���ɼ̳�
	}
};


void test01()
{
	Son2 s;
	//s.m_A = 100;//protected ���ⲻ�ɷ���
	Son1 s1;
	s1.m_A = 100;
}
//--------------------˽�м̳�--------------------

class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//�����й��е����� �ɼ̳У�����public
		m_B = 100;//�����б��������� �ɼ̳У�����protected ������ʲ���
		//m_C = 100;������˽�е����� ���ɼ̳�
	}
};
class GrandSon3 : public Son3
{
public:
	void myFunc()
	{
		//cout << m_A << endl; //�������� ���ʲ��� m_A����Ϊ��Son3��m_A�Ѿ���˽��������
	}

};

int main()
{


	return 0;
}