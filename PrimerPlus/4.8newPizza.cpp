#include <iostream>
#include <string>
using namespace std;


struct william
{
	char brand[20];
	float diameter;
	int weight;
};
int main()
{
	william* example;
	example = new william;
	cout << "Please Enter your pizza's information: " << endl;
	cout << "Brand: ";
	cin.getline(example->brand, 20);
	cout << "Diameter: ";
	cin >> example->diameter;
	cin.get();
	cout << "Weight: ";
	cin >> example->weight;
	cout << "So the folowing is your pizza's  information:" << endl;
	cout << "Brand: " << example->brand << ".\n";
	cout << "Diameter: " << example->diameter << "cm.\n";
	cout << "Weight: " << example->weight << "kg.\n";
	delete[] example;




	return 0;
}