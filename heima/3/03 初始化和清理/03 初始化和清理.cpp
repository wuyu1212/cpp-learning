#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "���캯������" << endl;

	}
	~Person()
	{
		cout << "������������" << endl;
	}
};
void test01()
{
	//Person p1; //Ĭ�ϵ����˹������������ϵͳ�ṩ��������ʵ�ֵĺ���
}

int main()
{
	Person p1;
	//test01();
	return 0;
}