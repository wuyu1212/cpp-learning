#include<iostream>
using namespace std;

struct william
{
	char brand[80];
	float diameter;
	float weight;

};

int main()
{
	william example;
	cout << "Please enter your pizza's information: " << endl;
	cout << "brand:";
	cin.getline(example.brand, 80);
	cout << "diameter;";
	cin >> example.diameter;
	cout << "weight:";
	cin >> example.weight;
	cout << "So the following is your pizza's information:" << endl;
	cout << "Brand: " << example.brand << ".\n";
	cout << "Diameter: " << example.diameter << "cm.\n";
	cout << "Weight: " << example.weight << "kg.\n";

	
	


	return 0;
}