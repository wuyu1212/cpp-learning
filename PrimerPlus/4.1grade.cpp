#include<iostream>
using namespace std;

int main()
{
	char firstname[80],lastname[80],grade;
	int age;
	cout << "What is your first name?" << endl;
	cin.getline(firstname, 80);
	cout << "What is your last name?" << endl;
	cin.getline(lastname, 80);
	cout << "What letter grade do you deserve? " << endl;
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	grade = grade + 1;

	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	system("pause");

	return 0;
}