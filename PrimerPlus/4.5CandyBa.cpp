#include<iostream>
using namespace std;

struct CandyBa
{
	char brand[20];
	float weight;
	int caloie;

};


int main()
{
	CandyBa snack =
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << "The snack is following:" << endl;
	cout << "Brand: " << snack.brand << endl;
	cout << "Wight: " << snack.weight << endl;
	cout << "Calorie: " << snack.caloie << endl;
	system("pause");
	return 0;
}