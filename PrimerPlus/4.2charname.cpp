#include<iostream>
using namespace std;

int main()
{
	char firstname[80],lastname[80], information[80];
	cout << "Enter your first name:";
	cin.getline(firstname, 80);
	cout << "Enter your last name:";
	cin.getline(lastname, 80);
	strcat_s(firstname, ", ");
	strcat_s(firstname, lastname);
	cout << "Here's the information in a single string:" << firstname;




	return 0;
}