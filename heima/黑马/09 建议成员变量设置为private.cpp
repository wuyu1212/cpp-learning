#include<iostream>
#include <string>
using namespace std;

class Person
{

public:

	//��������
	void setAge(int age)
	{
		if (age < 0 || age > 100)
		{
			cout << "�����������" << endl;
			return;
		}
		m_Age = age;
	}
	//��ȡ���� ��Ȩ��
	int getAge()
	{
		return m_Age;
	}

	//������
	string getName()
	{
		return m_Name;
	}
	//д����
	void setName(string name)
	{
		m_Name = name;
	}

	//ֻд������
	void setLover(string lover)
	{
		m_lover = lover;
	}

private: //���ⲻ�ɷ��ʣ����ڿ��Է���

	int m_Age = 0; //���� ��д
	string m_Name; //����Ȩ��  ��д
	string m_lover; //����  ֻд

};

void test01()
{
	Person p1;
	p1.setName("����");

	cout << "p1��������" << p1.getName() << endl;

	//����
	p1.setAge(120);

	cout << "p1�����䣺" << p1.getAge() << endl;

	//���� ֻ������ �ⲿ�Ҳ�������
	p1.setLover("�־�");




}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}