#include<iostream>
using namespace std;
#include<string>
class Person
{
public:
	//���캯��д��
	//��������ͬ��û�з���ֵ ����дvoid�����Է������� �������в�����
	//���캯���ɱ������Զ����ã��������ֶ�������ֻ�����һ��
	Person()
	{
		cout << "���캯������" << endl;
	}

	Person(int a)
	{
		cout << "���캯������(int a)" << endl;
	}


	//��������д��
	// ��������ͬ ����ǰ���һ������ ��~�� ,Ҳû�з���ֵ ����дvoid�� �������в��������ܷ������أ�
	//�Զ����ã�ֻ�����һ��
	~Person()
	{
		cout << "������������" << endl;
	}


};


void test01()
{
	Person p1(1); //Ĭ�ϵ����˹������������ϵͳ�ṩ��������ʵ�ֵĺ���
}

int main() {

	test01();


	system("pause");
	return EXIT_SUCCESS;
}