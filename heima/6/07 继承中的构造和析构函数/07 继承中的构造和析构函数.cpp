#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯������" << endl;
	}
	~Base()
	{
		cout << "Base��������������" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯������" << endl;
	}
	~Son()
	{
		cout << "Son��������������" << endl;
	}
};

void test01()
{
	//Base b;
	Son s;
}


class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
	}
	int m_A;
};
class Son2 :public Base2
{
public:
	//���ó�ʼ���б�ʽ ��ʾ���� �вι���
	Son2(int a) :Base2(a)
	{

	}
};

void test02()
{
	Son2 s(100);
}
// �����̳и���ĳ�Ա���ԣ���Ա����
//���� ���� ����̳� ���� ���캯�� �� ��������
//ֻ�и����Լ�֪���������������Լ������ԣ������಻֪��

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}