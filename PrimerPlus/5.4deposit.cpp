#include<iostream>
using namespace std;

int main()
{
	double dap, cle;
	dap = 100;
	cle = 100;
	int y;
	for (y = 0; dap >= cle; y++)
	{
		dap = 10 + dap;
		cle = cle *0.05+cle;
	}
	cout << y << " years later Cleo will have more money than Daphne." << endl;
	cout << "At that time Cleo will have $" << cle<< ", while Daphne will have $" << dap<< ".\n";



	return 0;
}