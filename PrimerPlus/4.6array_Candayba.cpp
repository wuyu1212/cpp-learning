
struct CandyBa
{
	char brand[20];
	float weight;
	int calorie;

};

int main()
{

	CandyBa snack[3] =
	{
	{"Mocha Munch",2.3,350},
	{"Fruit Salad",1.6,140},
	{"Fried Chicken",2.4,880}
	};

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
	system("pause");
	return 0;
}