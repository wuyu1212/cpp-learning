#include <iostream>
using namespace std;


//��̬����ת��
void test01()
{
	//��������ת��
	char a = 'a';

	//static_cast<Ŀ������>(ԭ����)
	double d = static_cast<double>(a);

	cout << d << endl;

}
class Base
{
	virtual void func() {};
};
class Son:public Base
{
	virtual void func() {};
};
class Other
{};

void test02()

{
	//�Զ�����������
	Base* base = NULL;
	Son* son = NULL;

	//base תΪson ����  ��������ת�� ����ȫ
	Son* son2 = static_cast<Son*>(base);
	Base* base2 = static_cast<Base*>(son);
	//base תΪ other*
	//û�и��ӹ�ϵ����������֮�����޷�ת����
	//Other* other = static_cast<Other*>(base);

}

//��̬����ת��
void test03()
{
	//������������  ������������������͵�ת��
	char c = 'c';
	//double d = dynamic_cast<double>(c);
	Base* base = NULL;
	Son* son = NULL;
	//base תΪSon* ���� ����ȫ
	//ת��ʧ��
	//Son* son2 = dynamic_cast<Son*>(base);
	Base* son2 = dynamic_cast<Base*>(son);
	//���������̬����ô����֮���ת�� ���ǰ�ȫ��
	Base* base3 = new Son;
	//��base3 תΪSon*
	Son*son3 = dynamic_cast<Son*>(base3)

}

int main()
{
	//test01();
	test02();
	return 0;
}