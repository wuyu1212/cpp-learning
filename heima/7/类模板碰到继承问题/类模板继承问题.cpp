#include <iostream>
using namespace std;

template<class T>
class Base
{
	T m_A;//子类创建之后 必须要知道T的类型， 才能给父类中的m_A分配内存

};

template<class T, class T2>//T2 给父类
class Son :public Base<T2>
{
	T m_B;

};

int main()
{
	Son<int ,double> s;

	return 0;
}