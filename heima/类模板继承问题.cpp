#include <iostream>
using namespace std;

template<class T>
class Base
{
	T m_A;//���ഴ��֮�� ����Ҫ֪��T�����ͣ� ���ܸ������е�m_A�����ڴ�

};

template<class T, class T2>//T2 ������
class Son :public Base<T2>
{
	T m_B;

};

int main()
{
	Son<int ,double> s;

	return 0;
}