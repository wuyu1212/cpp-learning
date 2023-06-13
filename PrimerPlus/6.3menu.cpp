#include <iostream>
#include <cctype>

using namespace std;

int main()
{

	cout << "Please enter one of the following choices:" << endl;
	cout << "C) carnicore\t" << "P) pianist" << endl;
	cout << "t) tree\t\t" << "g) game" << endl;
	char choice;
	cin.get(choice);
	while (isalpha(choice))
	{
		switch (choice)
		{
		case 'C': cout << "A maple is a carnivore." << endl;
			break;
		case 'P': cout << "A maple is a pianisit." << endl;
			break;
		case 'T': cout << "A maple is a tree." << endl;
			break;
		case 'G': cout << "A maple is a game." << endl;
			break;
		default: cout << "Please enter A C, P, T, or G: ";
			cin.ignore();
		}
		cin.get(choice);
	}



	return 0;
}