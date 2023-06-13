#include <iostream>  
#include <string>  
#include <fstream>
using namespace std;
struct donation {

	char name[30];
	double money;
};

int main()
{
	ifstream infile;
	cout << "Please enter the name of your file:";
	char filename[33];
	cin.getline(filename, 30);
	infile.open(filename);

	int num;
	infile >> num;
	char str[30];
	infile.getline(str, 1);
	donation* d = new donation[num];

	int bigger = 0;

	for (int i = 0; i < num; i++)
	{
		infile.getline(d[i].name, 30);
		infile >> d[i].money;
		infile.getline(str, 1);
		if (d[i].money > 10000)
		{
			bigger++;
		}

	}
	if (bigger > 0 && bigger < num)
	{
		cout << "Grand Patrons" << endl;
		for (int i = 0; i < num; i++)
		{
			if (d[i].money > 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		cout << "Patrons" << endl;
		for (int i = 0; i < num; i++)
		{
			if (d[i].money <= 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
	}

	if (bigger == 0)
	{
		cout << "Grand Patrons" << endl;
		cout << "none" << endl;
		cout << "Patrons" << endl;
		for (int i = 0; i < num; i++)
		{
			if (d[i].money <= 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
	}

	if (bigger == num)
	{
		cout << "Grand Patrons" << endl;
		for (int i = 0; i < num; i++)
		{
			if (d[i].money > 10000)
			{
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		cout << "Patrons" << endl;
		cout << "none" << endl;
	}

	delete[]d;
	infile.close();









	return 0;
}