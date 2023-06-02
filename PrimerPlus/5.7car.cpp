#include<iostream>
using namespace std;

int main()
{
	struct Car
	{
		char make[20];
		int year;

	};
	int num;
	cout << "how many cars do you wish to catalog?";
	cin >> num;
	Car *car2 = new Car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "car #" << i + 1 << endl;
		
		cout << "Please enter the make: ";
		cin.ignore();
		cin.getline(car2[i].make, 20);
		
		cout << "Please enter the year made";
		cin >> car2[i].year;
	}

	cout << "Here is your collection:" << endl;
	for (int i = 0; i < num; i++)
		cout << (*(car2 + i)).year << " " << (*(car2 + i)).make << endl;


	return 0;
}