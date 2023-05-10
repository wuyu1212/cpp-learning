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
		cout << " 姓名为：" << m_Name << " 学号为： " << m_Id << endl;
	}

	string m_Name;
	int m_Id;
		
};

void test01()
{
	student st;
	st.setName("张三");
	st.setId(1);
	cout << "st的姓名为： " << st.m_Name << " st的学号为： " << st.m_Id << endl;
	st.showInfo();
}

int main()
{
	test01();
	return 0;
}