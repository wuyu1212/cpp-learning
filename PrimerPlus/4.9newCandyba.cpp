#include <iostream>
#include <string>
using namespace std;

struct candybar
{
	char brand[80];
	double weight;
	int calorie;


};

int main()
{
	candybar* snack= new candybar[3];
	snack[0] = { "Mocha Munch",2.3,350 };
	snack[1] = { "Fruit Salad", 1.6, 140 };
	snack[2] = { "Fried Chicken", 2.4, 880 };
	cout << "The snack is following: " << endl;
	cout << "Brand: " << snack[0].brand << endl;
	cout << "Weight: " << snack[0].weight << endl;
	cout << "Calorie: " << snack[0].calorie << endl;
	cout << "Brand: " << snack[1].brand << endl;
	cout << "Weight: " << snack[1].weight << endl;
	cout << "Calorie: " << snack[1].calorie << endl;
	cout << "Brand: " << snack[2].brand << endl;
	cout << "Weight: " << snack[2].weight << endl;
	cout << "Calorie: " << snack[2].calorie << endl;
	delete[]snack;




	return 0;
}