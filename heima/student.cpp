#include<iostream>
using namespace std;


class student
{
public:

	void setName(string name)
	{
		m_Name = name;
	}
	void setId(int id)
	{
		m_Id = id;
	}

	void showInfo()
	{
		cout << " ����Ϊ��" << m_Name << " ѧ��Ϊ�� " << m_Id << endl;
	}

	string m_Name;
	int m_Id;
		
};

void test01()
{
	student st;
	st.setName("����");
	st.setId(1);
	cout << "st������Ϊ�� " << st.m_Name << " st��ѧ��Ϊ�� " << st.m_Id << endl;
	st.showInfo();
}

int main()
{
	test01();
	return 0;
}