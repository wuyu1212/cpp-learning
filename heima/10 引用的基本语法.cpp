#include<iostream>
using namespace std;

//1.���û����﷨ type����һ�� 
void test01()
{
	int a = 10;
	int& b = a;

	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void test02()
{
	
	//int& a; �����ʼ��
	int a = 10;
	int& b = a;//��ʼ����Ͳ������޸��ˣ������ٳ�Ϊ��ı���
	int c = 20;
	b = c; //��ֵ������
	
}
//3�� �����齨������
void test03()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//�����������
	int(&parr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << parr[i] << " ";
	}
	cout << endl;
	//�ڶ��ַ�ʽ�����
	typedef int(arrayef)[10];//һ������10��Ԫ�ص�int��������
	arrayef& parr2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << parr2[i] << " ";
	}

}


int main()
{
	//test01();
	test03();
	return 0;
}