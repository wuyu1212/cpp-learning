#include<iostream>
using namespace std;
#include<string>
int main()
{
	string firstname, lastname, wholename;
	cout << "Enter your first name:";
	getline(cin, firstname);
	cout << "Enter your last name:";
	getline(cin, lastname);
	wholename = firstname + ',' + lastname;
	cout << "Here's the information in a single string:"<<wholename;


	return 0;
}