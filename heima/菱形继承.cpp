#include<iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

// ����� Sheep
class Sheep :virtual public Animal
{
};
//����� Tuo
class Tuo : virtual public Animal
{
};

class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{

}