#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}

	virtual void eat()
	{
		cout << "�����ڳԷ�" << endl;
	}

};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}

	virtual void eat()
	{
		cout << "Сè�ڳ���" << endl;
	}
};

//����doSpeak ��speak�����ĵ�ַ��Ͱ󶨺��ˣ���󶨣���̬���࣬����׶ξ�ȷ�����˵�ַ
//��������è��speak��������ǰ�󶨺ú����ĵ�ַ�ˣ�������Ҫ������ʱ����ȥȷ��������ַ
//��̬���࣬д�� doSpeak������Ϊ�麯��,�ڸ����������麯���������˶�̬
// ��������û���ָ�� ָ�� �������
void doSpeak(Animal& animal) //Animal & animal = cat
{
	animal.speak();
}
//��������˼̳еĹ�ϵ�������������������ת��

void test01()
{
	Cat cat;
	doSpeak(cat);

}


void test02()
{
	//cout << sizeof(Animal) << endl;
	//����ָ��ָ��������� ��̬
	Animal* animal = new Cat;

	//animal->speak();
	// *(int*)*(int*)animal ������ַ
	((void(*)()) (*(int*)*(int*)animal))();

	//  *((int*)*(int*)animal+1)è����ĵ�ַ

	((void(*)()) (*((int*)*(int*)animal + 1)))();
}

int main() {

	//test01();

	test02();

	system("pause");
	return EXIT_SUCCESS;
}