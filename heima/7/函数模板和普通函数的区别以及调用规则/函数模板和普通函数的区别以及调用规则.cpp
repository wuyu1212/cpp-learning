#include <iostream>
using namespace std;



int myPlus(int a, int b)
{
	return a + b;
}


template<class T>
int myplus2(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myPlus(a,c) << endl;
	//myplus2(a,c)�Զ������Ƶ������У�������ʾָ�����ͷ�ʽ����

}
//���ù���

template<class T>
void myPrint(T a, T b)
{
	cout << "����ģ�����" << endl;
 }

template<class T>
void myPrint(T a, T b ,T c)
{
	cout << "����ģ�����(T a, T b��T c)" << endl;
}

void myPrint(int a,  int b)
{
	cout << "��ͨ��������" << endl;
}

void test02()
{
	//1. �����ͨ������ģ�庯������ͬʱ���ã�ֻʹ����ͨ����
	int a = 10;
	int b = 20;
	myPrint(a, b);

	//2. ǿ�Ƶ��� ����ģ������ݣ�����ʹ�ÿղ����б�
	myPrint<>(a, b);

	//3.����ģ��Ҳ��������
	myPrint(a, b, 10);

	//4.����ģ����Բ������õ�ƥ�䣬����ʹ�ú���ģ��
	char c = 'c ';
	char d = 'd ';
	myPrint(c, d);
}

int main()
{

	//test01();
	test02();
	return 0;
}