#include<iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

// 虚基类 Sheep
class Sheep :virtual public Animal
{
};
//虚基类 Tuo
class Tuo : virtual public Animal
{
};

class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{

}