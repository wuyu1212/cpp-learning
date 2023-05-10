#include<iostream>
using namespace std;

/*
�����������(Cube)��
�������������( 2*a*b + 2*a*c + 2*b*c )�����( a * b * c)��
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/
class Cube
{
public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int l)
	{
		m_W = l;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int l)
	{
		m_H = l;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}
	//������������
	void getCubeS()
	{
		int s = 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
		cout << "����������Ϊ�� " << s << endl;
	}
	void getCubeV()
	{
		int v = m_L * m_W * m_H;
		cout << "����������Ϊ�� " << v << endl;
	}
	bool compareCubeByClass(Cube& cub)
	{
		bool ret = m_L == cub.getL() && m_W == cub.getW() && m_H == cub.getH();
		return ret;
	}

private:
	int m_L;
	int m_W;
	int m_H;
};
bool compareCube(Cube& cub1, Cube& cub2)
{
	if (cub1.getL() == cub2.getL() && cub1.getW() == cub2.getW() && cub1.getH() == cub2.getH())
	{
		return true;
	}
	return false;
}



void test01()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	c1.getCubeS(); // 600
	c1.getCubeV(); // 1000
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	////////////////////////////////////////

	bool ret =  compareCube(c1, c2);
	if (ret)
	{
		cout << "c1 �� c2 ����ȵģ�" << endl;
	}
	else
	{
		cout << "c1 �� c2�ǲ��ȵģ�" << endl;
	}
	bool ret2 = c1.compareCubeByClass(c2);
	if (ret2)
	{
		cout << "ͨ����Ա����c1 �� c2 ����ȵģ�" << endl;
	}
	else
	{
		cout << "ͨ����Ա����c1 �� c2�ǲ��ȵģ�" << endl;
	}


}




int main()
{
	test01();
	return 0;
}