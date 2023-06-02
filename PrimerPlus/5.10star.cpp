#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	int i;
	cout << "Enter number of rows:";
	cin >> i;
	for (int j = 0; j < i; j++)
	{
		for (int k = 0; k < i - j - 1; k++)
			cout << ".";
		for (int l = 0; l < j+1; l++)
			cout << "*";
		cout << endl;
	}



	return 0;
}